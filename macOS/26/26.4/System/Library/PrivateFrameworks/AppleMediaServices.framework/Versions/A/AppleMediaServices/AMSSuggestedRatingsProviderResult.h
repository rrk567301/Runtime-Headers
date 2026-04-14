@class NSArray, NSString;

@interface AMSSuggestedRatingsProviderResult : NSObject {
    void /* function */ dataObject;
    void /* function */ ageGroupContentPolicies;
    void /* function */ storeFront;
    void /* unknown type, empty encoding */ response;
}

@property (nonatomic, readonly) NSArray *dataObject;
@property (nonatomic, readonly) NSArray *ageGroupContentPolicies;
@property (nonatomic, readonly) NSString *storeFront;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionaries:(id)a0 storeFront:(id)a1;
- (id)initWithUrlResult:(id)a0 storeFront:(id)a1;

@end
