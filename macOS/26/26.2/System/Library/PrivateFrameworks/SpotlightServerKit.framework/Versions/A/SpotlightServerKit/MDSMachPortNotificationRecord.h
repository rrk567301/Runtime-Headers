@interface MDSMachPortNotificationRecord : NSObject {
    unsigned int _previousPort;
    SEL _aSelector;
    id _anObject;
}

- (id)object;
- (SEL)selector;
- (void)dealloc;
- (id)initWithPreviousPort:(unsigned int)a0 selector:(SEL)a1 andObject:(id)a2;
- (unsigned int)previousPort;

@end
