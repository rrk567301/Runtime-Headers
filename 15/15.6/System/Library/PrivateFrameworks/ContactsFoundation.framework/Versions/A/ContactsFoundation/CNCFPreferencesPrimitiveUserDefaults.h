@class NSString;

@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {
    NSString *_applicationID;
    long long _autosyncTimerIsActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)synchronize;
- (struct __CFString { } *)CFApplicationID;
- (id)initWithApplicationID:(id)a0;
- (char)primitiveBoolValueForKey:(id)a0 keyExists:(char *)a1;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(char *)a1;
- (id)primitiveObjectForKey:(id)a0;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (void)setupAutosync;

@end
