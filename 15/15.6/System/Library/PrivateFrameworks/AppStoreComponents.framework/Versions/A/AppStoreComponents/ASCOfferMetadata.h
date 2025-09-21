@interface ASCOfferMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCOfferMetadata *emptyMetadata;
@property (class, readonly) ASCOfferMetadata *placeholderMetadata;
@property (class, readonly) ASCOfferMetadata *viewInAppStoreMetadata;
@property (class, readonly) ASCOfferMetadata *redownloadMetadata;
@property (class, readonly) ASCOfferMetadata *indeterminateProgressMetadata;
@property (class, readonly) ASCOfferMetadata *deeplinkMetadata;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (readonly, nonatomic, getter=isText) char text;
@property (readonly, nonatomic, getter=isIcon) char icon;
@property (readonly, nonatomic, getter=isProgress) char progress;
@property (readonly, nonatomic, getter=isPlaceholder) char placeholder;
@property (readonly, nonatomic, getter=isDeeplink) char deeplink;
@property (readonly, nonatomic, getter=isViewInAppStore) char viewInAppStore;

+ (id)textMetadataWithTitle:(id)a0 subtitle:(id)a1;
+ (id)iconMetadataWithImageName:(id)a0 animationName:(id)a1;
+ (id)progressMetadataWithValue:(double)a0;
+ (id)progressMetadataWithValue:(double)a0 cancellable:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
