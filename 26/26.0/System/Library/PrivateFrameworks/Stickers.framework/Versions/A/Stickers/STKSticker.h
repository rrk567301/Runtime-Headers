@class NSArray, NSUUID, NSString, NSDate, NSData, STKStickerAttributionInfo;

@interface STKSticker : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ identifier;
    void /* function */ representations;
    void /* function */ accessibilityName;
    void /* function */ name;
    void /* function */ searchText;
    void /* function */ sanitizedPrompt;
    void /* function */ rewrittenPrompt;
    void /* function */ promptPrimaryLanguageIdentifier;
    void /* function */ metadata;
    void /* function */ externalURI;
    void /* unknown type, empty encoding */ _companionRecentUUID;
    void /* unknown type, empty encoding */ animatedVariantIsPreferred;
}

@property (class, nonatomic, readonly) NSDate *kGenmojiFirstBetaReleaseDate;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL distributionIsRestricted;
@property (nonatomic, readonly) BOOL canDistribute;
@property (nonatomic, readonly) NSArray *distributionRestrictions_ObjC;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *id;
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic, copy) NSString *accessibilityName;
@property (nonatomic) long long byteCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic, copy) NSString *sanitizedPrompt;
@property (nonatomic, copy) NSString *rewrittenPrompt;
@property (nonatomic, copy) NSString *promptPrimaryLanguageIdentifier;
@property (nonatomic, readonly) BOOL isGeneratedSticker;
@property (nonatomic) long long effect;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *externalURI;
@property (nonatomic, retain) STKStickerAttributionInfo *attributionInfo;
@property (nonatomic) double creationDate;
@property (nonatomic) double lastUsedDate;
@property (nonatomic) double libraryIndex;
@property (nonatomic, copy) NSUUID *_companionRecentUUID;
@property (nonatomic, readonly) BOOL prefersAnimation;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
