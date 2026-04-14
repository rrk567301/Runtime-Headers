@class WBSFormMetadata, NSString, WKFrameInfo;

@interface WBSAutoFillFrameAssociatedFormMetadata : NSObject

@property (nonatomic, readonly) WKFrameInfo *frameInfo;
@property (nonatomic, readonly) WBSFormMetadata *formMetadata;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrameInfo:(id)a0 formMetadata:(id)a1;

@end
