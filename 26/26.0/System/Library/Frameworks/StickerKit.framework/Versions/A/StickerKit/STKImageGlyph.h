@class NSString, NSUUID;

@interface STKImageGlyph : NSObject {
    void /* unknown type, empty encoding */ stickerUUID;
    void /* function */ avatarIdentifier;
    void /* function */ poseIdentifier;
    void /* function */ emojiString;
    void /* unknown type, empty encoding */ optionalData;
    void /* unknown type, empty encoding */ emoji;
    void /* unknown type, empty encoding */ loadedSticker;
    void /* unknown type, empty encoding */ didAttemptToLoadSticker;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSUUID *stickerUUID;
@property (nonatomic, readonly) unsigned long long stickerEffectType;
@property (nonatomic, readonly) long long stickerSourceType;
@property (nonatomic, readonly) NSString *avatarIdentifier;
@property (nonatomic, readonly) NSString *poseIdentifier;
@property (nonatomic, readonly) NSString *emojiString;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSString *toString;
@property (nonatomic, readonly) NSString *debugDescription;

+ (id)fromEmojiString:(id)a0;
+ (id)fromSticker:(id)a0;
+ (id)fromStickerIdentifier:(id)a0;
+ (id)imageGlyphForGlyphIdentifier:(id)a0;

- (id)searchText;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)createEmojiImageTextAttachmentWithCompletionHandler:(id /* block */)a0;
- (id)createStickerWithMetadataOnly;
- (id)createStickerWithAllRepresentations;
- (id)accessibilityCaption;
- (id)createTextInputStickerPayload;

@end
