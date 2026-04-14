@class NSString, LACKeyBagMKBAdapter, NSHashTable, NSNumber;

@interface LACPasscodeHelper : NSObject <LACKeyBagObserver> {
    double _lastPasscodeSuccessUptime;
    NSHashTable *_observers;
    LACKeyBagMKBAdapter *_keyBagAdapter;
    NSNumber *_keyBagDisabled;
}

@property (readonly, nonatomic) double passcodeSuccessAge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)isPasscodeSetForUser:(unsigned int)a0 error:(id *)a1;
- (void)updatePasscodeSuccessAgeWithCurrentSystemUptime;
- (void)keybagStateDidChange:(id)a0;
- (void)updatePasscodeSuccessAgeWithUptime:(id)a0;
- (void)_notifyObserversAboutUpdate;
- (void)_updatePasscodeSuccessAgeWithUptime:(id)a0;

@end
