@class NSDictionary, APOdmlServerResponse;

@interface ADDataObject : NSObject

@property (copy, nonatomic) NSDictionary *adData;
@property long long adResponseInUseType_Int;
@property (nonatomic) BOOL usesSingleRepresentation;
@property (readonly) NSDictionary *adResponseInUse;
@property (readonly, nonatomic) NSDictionary *dupAdResponse;
@property (readonly, nonatomic) NSDictionary *noOrganicAdResponse;
@property (readonly, nonatomic) NSDictionary *normalAdResponse;
@property long long adResponseInUseType;
@property (readonly) APOdmlServerResponse *odmlResponse;
@property (readonly) NSDictionary *allOdmlResponses;

+ (id)adResponseTypeToString:(long long)a0;

- (void)updateAdDataWithLocationState:(BOOL)a0 personalizedAdsState:(BOOL)a1;
- (id)_jsonToDict:(id)a0 error:(id *)a1;
- (void)parseResponseData;
- (id)initWith:(id)a0 andError:(id)a1;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (id)parseDataForAdResponse:(id)a0;
- (id)AD_jsonDictionary;
- (id)dictionaryWithModifiedTransparencyPayload:(id)a0 locationState:(BOOL)a1 personalizedAdsState:(BOOL)a2;

@end
