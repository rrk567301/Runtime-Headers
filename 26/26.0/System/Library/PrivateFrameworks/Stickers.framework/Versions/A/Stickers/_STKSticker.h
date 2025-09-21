@class NSUUID, NSArray, NSString, NSData, _STKStickerAttributionInfo;

@interface _STKSticker : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* function */ representations;
    void /* function */ name;
    void /* function */ externalURI;
    void /* function */ accessibilityName;
    void /* function */ metadata;
    void /* function */ searchText;
    void /* function */ sanitizedPrompt;
    void /* function */ rewrittenPrompt;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSArray *representations;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long effectType;
@property (nonatomic, readonly) NSString *externalURI;
@property (nonatomic, readonly) NSString *accessibilityName;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) _STKStickerAttributionInfo *attributionInfo;
@property (nonatomic, readonly) NSString *searchText;
@property (nonatomic, readonly) NSString *sanitizedPrompt;
@property (nonatomic, readonly) NSString *rewrittenPrompt;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
