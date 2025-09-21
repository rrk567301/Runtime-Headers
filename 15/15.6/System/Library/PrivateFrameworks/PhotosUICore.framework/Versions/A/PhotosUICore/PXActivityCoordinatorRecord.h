@protocol PXActivityCoordinatorItem;

@interface PXActivityCoordinatorRecord : NSObject

@property (weak, nonatomic) id<PXActivityCoordinatorItem> item;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;

@end
