@class NSDictionary, WBSAutoFillFrameAssociatedFormMetadata, NSString;

@interface WBSAutoFillValuesForFilling : NSObject {
    void /* function */ controlIDsToValues;
}

@property (nonatomic, readonly) WBSAutoFillFrameAssociatedFormMetadata *frameAssociatedFormMetadata;
@property (nonatomic, readonly) NSDictionary *controlIDsToValues;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrameAssociatedFormMetadata:(id)a0 controlIDsToValues:(id)a1;

@end
