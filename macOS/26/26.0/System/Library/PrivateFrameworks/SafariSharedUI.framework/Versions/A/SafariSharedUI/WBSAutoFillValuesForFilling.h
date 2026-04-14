@class NSDictionary, WBSAutoFillFrameAssociatedFormMetadata, NSString;

@interface WBSAutoFillValuesForFilling : NSObject {
    void /* function */ controlIDsToValues;
}

@property (nonatomic, readonly) WBSAutoFillFrameAssociatedFormMetadata *frameAssociatedFormMetadata;
@property (nonatomic, readonly) NSDictionary *controlIDsToValues;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrameAssociatedFormMetadata:(id)a0 controlIDsToValues:(id)a1;

@end
