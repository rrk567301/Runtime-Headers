@class NSSet, NSUUID;

@interface TITextCheckerExemptionsImpl : NSObject {
    id /* block */ _contactObserver;
    id _userDictionaryObserver;
    unsigned long long _observerAssertionCount;
}

@property (retain, nonatomic) NSSet *addressBookTokens;
@property (retain, nonatomic) NSSet *userDictionaryTokens;
@property (copy, nonatomic) NSUUID *userDictionaryUUID;

+ (id)sharedTextCheckerExemptionsImpl;

- (BOOL)stringIsExemptFromChecker:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserverAssertion;
- (void)addObserverAssertion;

@end
