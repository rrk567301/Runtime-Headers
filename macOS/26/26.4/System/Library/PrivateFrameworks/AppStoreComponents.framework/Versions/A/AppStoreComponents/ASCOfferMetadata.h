@interface ASCOfferMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCOfferMetadata *emptyMetadata;
@property (class, readonly) ASCOfferMetadata *placeholderMetadata;
@property (class, readonly) ASCOfferMetadata *viewInAppStoreMetadata;
@property (class, readonly) ASCOfferMetadata *redownloadMetadata;
@property (class, readonly) ASCOfferMetadata *indeterminateProgressMetadata;
@property (class, readonly) ASCOfferMetadata *deeplinkMetadata;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isTextOnly) BOOL text;
@property (readonly, nonatomic, getter=isIconOnly) BOOL icon;
@property (readonly, nonatomic, getter=isTextAndIcon) BOOL iconAndText;
@property (readonly, nonatomic, getter=isProgress) BOOL progress;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isDeeplink) BOOL deeplink;
@property (readonly, nonatomic, getter=isViewInAppStore) BOOL viewInAppStore;

+ (id)resumeMetadata:(id)a0;
+ (id)textMetadataWithTitle:(id)a0 subtitle:(id)a1;
+ (id)offerMetadataWithTitle:(id)a0 subtitle:(id)a1 imageName:(id)a2;
+ (id)progressMetadataWithValue:(double)a0;
+ (id)progressMetadataWithValue:(double)a0 cancellable:(BOOL)a1;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isIcon;
- (BOOL)isText;

@end
