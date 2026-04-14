@protocol _VZHIDAdditions, _VZKeyboardEventSender;

@interface _VZKeyboard : NSObject {
    id<_VZHIDAdditions, _VZKeyboardEventSender> _eventSender;
    unsigned int _deviceIdentifier;
}

@property (readonly) long long type;
@property (readonly) unsigned long long activeIndicators;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 virtualMachine:(id)a1 deviceIdentifier:(unsigned int)a2;
- (void)sendKeyEvents:(id)a0;

@end
