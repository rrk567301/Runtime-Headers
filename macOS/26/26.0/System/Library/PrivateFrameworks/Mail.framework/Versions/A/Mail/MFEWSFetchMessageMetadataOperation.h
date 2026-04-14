@class MFEWSMailboxItemsBatch;
@protocol MFEWSFetchMessageMetadataOperationDelegate;

@interface MFEWSFetchMessageMetadataOperation : MFEWSNetworkTaskOperation

@property (weak, nonatomic) id<MFEWSFetchMessageMetadataOperationDelegate> delegate;
@property (readonly, nonatomic) MFEWSMailboxItemsBatch *batch;

+ (id)_propertiesForItemClass:(Class)a0;
+ (id)_shapeForType:(Class)a0;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBatch:(id)a0;

@end
