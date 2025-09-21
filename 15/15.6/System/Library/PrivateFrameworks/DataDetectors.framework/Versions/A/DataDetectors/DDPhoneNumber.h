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
    char _reachabilityTestsLaunched;
    unsigned long long _reachabilityTestsRetries;
    NSString *_IDSUUID;
    NSMenuItem *_menuItem;
    SEL _actionSelector;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)displayNumber;
- (id)messageURL;
- (void)appendDataFromResult:(struct __DDResult { } *)a0;
- (void)appendPhoneNumber:(id)a0;
- (char)couldBeValidForDial;
- (char)couldBeValidForFacetime;
- (char)couldBeValidForMessages;
- (id)dialNumber;
- (id)dialURLUsingPrompt:(char)a0;
- (id)dialURLWithScheme:(id)a0;
- (id)displayNumbers;
- (id)facetimeNumber;
- (char)facetimeReachabilityIsValid;
- (id)facetimeURLAudioOnly:(char)a0;
- (void)fecthedFacetimeStatus;
- (id)initWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
- (char)isFacetimeReachable;
- (void)setFacetimeMenuItem:(id)a0;
- (void)testFacetimeReachability;
- (void)testFacetimeReachabilityForPhones:(id)a0 emails:(id)a1;
- (void)testReachability:(id)a0 isEmail:(char)a1;

@end
