@class NSData;
@protocol ICReindexAllItemsOperationDelegate;

@interface ICReindexAllItemsOperation : ICIndexItemsOperation

@property (readonly) NSData *clientStateData;
@property (weak, nonatomic) id<ICReindexAllItemsOperationDelegate> delegate;

- (void)main;
- (void).cxx_destruct;
- (id)initWithSearchableIndex:(id)a0 dataSources:(id)a1 delegate:(id)a2;

@end
