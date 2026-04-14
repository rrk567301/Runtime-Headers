@class NSString;
@protocol PXTripsFeedActionPerformerDelegate;

@interface PXTripsFeedActionPerformer : NSObject <PXFeedActionPerformer>

@property (weak, nonatomic) id<PXTripsFeedActionPerformerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
