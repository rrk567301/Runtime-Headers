@class NSData, NSString;

@interface _CPQueryUnderstandingParse : PBCodable <_CPQueryUnderstandingParse, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int queryIntentType;
@property (nonatomic) char hasUnspecifiedTokens;
@property (nonatomic) char hasSortCriteriaTokens;
@property (nonatomic) char hasLocationTokens;
@property (nonatomic) char hasActionTokens;
@property (nonatomic) char hasMediaTypeTokens;
@property (nonatomic) char hasVisualQualityTokens;
@property (nonatomic) char hasNounTokens;
@property (nonatomic) char hasTimeTokens;
@property (nonatomic) char hasEventTokens;
@property (nonatomic) char hasGenericLocationTokens;
@property (nonatomic) char hasCaptureDeviceTokens;
@property (nonatomic) char hasFavoritedTokens;
@property (nonatomic) char hasSourceAppTokens;
@property (nonatomic) char hasPersonTokens;
@property (nonatomic) char hasPersonSenderTokens;
@property (nonatomic) int spotlightQueryIntent;
@property (nonatomic) char isUnsafeQuery;
@property (nonatomic) char isBlocklistedQuery;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
