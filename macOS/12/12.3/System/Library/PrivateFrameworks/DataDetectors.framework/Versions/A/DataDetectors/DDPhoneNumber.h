@class NSString, NSMutableArray, NSMenuItem;

@interface DDPhoneNumber : NSObject {
    NSMutableArray *_phoneNumbers;
    NSMutableArray *_displayNumbers;
    NSMutableArray *_emailAddresses;
    NSMutableArray *_facetimePhoneNumbers;
    NSMutableArray *_facetimeEmailAddresses;
    NSMutableArray *_unkownPhoneNumbers;
    NSMutableArray *_unkownEmailAddresses;
    unsigned long long _reachabilityTestsPending;
    BOOL _reachabilityTestsLaunched;
    unsigned long long _reachabilityTestsRetries;
    NSString *_IDSUUID;
    NSMenuItem *_menuItem;
    SEL _actionSelector;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)displayNumber;
- (id)initWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
- (BOOL)couldBeValidForDial;
- (id)dialURLUsingPrompt:(BOOL)a0;
- (BOOL)couldBeValidForMessages;
- (id)messageURL;
- (id)dialNumber;
- (BOOL)couldBeValidForFacetime;
- (void)setFacetimeMenuItem:(id)a0;
- (id)facetimeURLAudioOnly:(BOOL)a0;
- (id)displayNumbers;
- (void)testFacetimeReachability;
- (BOOL)facetimeReachabilityIsValid;
- (BOOL)isFacetimeReachable;
- (void)testFacetimeReachabilityForPhones:(id)a0 emails:(id)a1;
- (void)fecthedFacetimeStatus;
- (void)testReachability:(id)a0 isEmail:(BOOL)a1;
- (id)facetimeNumber;
- (id)dialURLWithScheme:(id)a0;
- (void)appendPhoneNumber:(id)a0;
- (void)appendDataFromResult:(struct __DDResult { } *)a0;

@end
