@protocol WBSCloudTabProvider;

@interface LibraryItemCloudTabDevice : LibraryItem

@property (readonly, nonatomic) id<WBSCloudTabProvider> device;

- (id)initWithDevice:(id)a0;
- (id)icon;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
