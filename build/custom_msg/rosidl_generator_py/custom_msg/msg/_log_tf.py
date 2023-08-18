# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msg:msg/LogTf.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LogTf(type):
    """Metaclass of message 'LogTf'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msg.msg.LogTf')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__log_tf
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__log_tf
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__log_tf
            cls._TYPE_SUPPORT = module.type_support_msg__msg__log_tf
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__log_tf

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LogTf(metaclass=Metaclass_LogTf):
    """Message class 'LogTf'."""

    __slots__ = [
        '_time_frame',
        '_log_msg',
    ]

    _fields_and_field_types = {
        'time_frame': 'string',
        'log_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_frame = kwargs.get('time_frame', str())
        self.log_msg = kwargs.get('log_msg', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.time_frame != other.time_frame:
            return False
        if self.log_msg != other.log_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def time_frame(self):
        """Message field 'time_frame'."""
        return self._time_frame

    @time_frame.setter
    def time_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'time_frame' field must be of type 'str'"
        self._time_frame = value

    @property
    def log_msg(self):
        """Message field 'log_msg'."""
        return self._log_msg

    @log_msg.setter
    def log_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'log_msg' field must be of type 'str'"
        self._log_msg = value
