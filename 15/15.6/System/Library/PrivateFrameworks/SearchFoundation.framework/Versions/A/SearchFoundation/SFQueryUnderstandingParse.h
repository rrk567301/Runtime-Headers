@class NSDictionary, NSData, NSString;

@interface SFQueryUnderstandingParse : NSObject <SFQueryUnderstandingParse, NSSecureCoding, NSCopying> {
    struct { unsigned char queryIntentType : 1; unsigned char hasUnspecifiedTokens : 1; unsigned char hasSortCriteriaTokens : 1; unsigned char hasLocationTokens : 1; unsigned char hasActionTokens : 1; unsigned char hasMediaTypeTokens : 1; unsigned char hasVisualQualityTokens : 1; unsigned char hasNounTokens : 1; unsigned char hasTimeTokens : 1; unsigned char hasEventTokens : 1; unsigned char hasGenericLocationTokens : 1; unsigned char hasCaptureDeviceTokens : 1; unsigned char hasFavoritedTokens : 1; unsigned char hasSourceAppTokens : 1; unsigned char hasPersonTokens : 1; unsigned char hasPersonSenderTokens : 1; unsigned char spotlightQueryIntent : 1; unsigned char isUnsafeQuery : 1; unsigned char isBlocklistedQuery : 1; } _has;
}

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
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasHasActionTokens;
- (char)hasHasCaptureDeviceTokens;
- (char)hasHasEventTokens;
- (char)hasHasFavoritedTokens;
- (char)hasHasGenericLocationTokens;
- (char)hasHasLocationTokens;
- (char)hasHasMediaTypeTokens;
- (char)hasHasNounTokens;
- (char)hasHasPersonSenderTokens;
- (char)hasHasPersonTokens;
- (char)hasHasSortCriteriaTokens;
- (char)hasHasSourceAppTokens;
- (char)hasHasTimeTokens;
- (char)hasHasUnspecifiedTokens;
- (char)hasHasVisualQualityTokens;
- (char)hasIsBlocklistedQuery;
- (char)hasIsUnsafeQuery;
- (char)hasQueryIntentType;
- (char)hasSpotlightQueryIntent;

@end
