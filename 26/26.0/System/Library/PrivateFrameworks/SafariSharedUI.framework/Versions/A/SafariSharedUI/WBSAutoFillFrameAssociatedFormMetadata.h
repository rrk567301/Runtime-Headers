@class WBSFormMetadata, NSString, WKFrameInfo;

@interface WBSAutoFillFrameAssociatedFormMetadata : NSObject

@property (nonatomic, readonly) WKFrameInfo *frameInfo;
@property (nonatomic, readonly) WBSFormMetadata *formMetadata;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrameInfo:(id)a0 formMetadata:(id)a1;

@end
