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

- (void).cxx_destruct;
- (void)dealloc;
- (void)removeObserverAssertion;
- (void)addObserverAssertion;
- (BOOL)stringIsExemptFromChecker:(id)a0;

@end
