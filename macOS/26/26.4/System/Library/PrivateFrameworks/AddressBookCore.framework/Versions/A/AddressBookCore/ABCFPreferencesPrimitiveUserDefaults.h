@class NSString;

@interface ABCFPreferencesPrimitiveUserDefaults : NSObject <ABPrimitiveUserDefaults> {
    NSString *_applicationID;
    long long _autosyncTimerIsActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAutosync;
- (id)primitiveObjectForKey:(id)a0;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)synchronize;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (id)initWithApplicationID:(id)a0;
- (void)dealloc;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;

@end
