@protocol PXActivityCoordinatorItem;

@interface PXActivityCoordinatorRecord : NSObject

@property (weak, nonatomic) id<PXActivityCoordinatorItem> item;

- (id)initWithItem:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
