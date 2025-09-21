@class NSString, NSObject;

@interface _DKSyncToggle : NSObject {
    char _enabled;
    NSObject *_object;
    NSString *_name;
    SEL _enableSelector;
    SEL _disableSelector;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setEnabled:(char)a0;
- (id)initWithObject:(id)a0 name:(id)a1 enableSelector:(SEL)a2 disableSelector:(SEL)a3;

@end
