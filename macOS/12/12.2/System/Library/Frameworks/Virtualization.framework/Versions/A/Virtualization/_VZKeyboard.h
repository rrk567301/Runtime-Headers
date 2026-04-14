@class VZVirtualMachine;

@interface _VZKeyboard : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _keyboardIndex;
}

@property (readonly) long long type;
@property (readonly) unsigned long long activeIndicators;

- (void).cxx_destruct;
- (void)sendKeyEvents:(id)a0;

@end
