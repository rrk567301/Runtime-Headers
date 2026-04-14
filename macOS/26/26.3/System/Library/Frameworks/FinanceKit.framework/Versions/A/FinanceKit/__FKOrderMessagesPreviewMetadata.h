@class __FKOrderMessagesPreviewMetadataText, __FKOrderMessagesPreviewMetadataImage;

@interface __FKOrderMessagesPreviewMetadata : NSObject

@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataImage *image;
@property (nonatomic, readonly) struct CGColor { } *backgroundColor;
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *primaryText;
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *secondaryText;
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *tertiaryText;

+ (id)createWalletDeepLinkForExistingOrderAt:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOrderData:(id)a0 workingDirectory:(id)a1 error:(id *)a2;
- (id)initWithOrderData:(id)a0 error:(id *)a1;

@end
