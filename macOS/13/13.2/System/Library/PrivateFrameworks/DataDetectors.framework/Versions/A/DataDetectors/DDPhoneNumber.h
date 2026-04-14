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
- (BOOL)couldBeValidForFacetime;
- (BOOL)couldBeValidForDial;
- (BOOL)couldBeValidForMessages;
- (void)setFacetimeMenuItem:(id)a0;
- (void)fecthedFacetimeStatus;
- (void)testReachability:(id)a0 isEmail:(BOOL)a1;
- (void)testFacetimeReachabilityForPhones:(id)a0 emails:(id)a1;
- (void)testFacetimeReachability;
- (BOOL)facetimeReachabilityIsValid;
- (BOOL)isFacetimeReachable;
- (id)facetimeNumber;
- (id)facetimeURLAudioOnly:(BOOL)a0;
- (id)dialNumber;
- (id)dialURLWithScheme:(id)a0;
- (id)dialURLUsingPrompt:(BOOL)a0;
- (id)messageURL;
- (id)displayNumbers;
- (void)appendPhoneNumber:(id)a0;
- (void)appendDataFromResult:(struct __DDResult { } *)a0;
- (id)initWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;

@end
