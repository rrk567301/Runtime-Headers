@protocol PXActivityCoordinatorItem;

@interface PXActivityCoordinatorRecord : NSObject

@property (weak, nonatomic) id<PXActivityCoordinatorItem> item;

- (id)initWithItem:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
