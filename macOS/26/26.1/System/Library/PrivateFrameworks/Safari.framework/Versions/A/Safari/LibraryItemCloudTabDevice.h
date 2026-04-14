@protocol WBSCloudTabProvider;

@interface LibraryItemCloudTabDevice : LibraryItem

@property (readonly, nonatomic) id<WBSCloudTabProvider> device;

- (id)initWithDevice:(id)a0;
- (unsigned long long)hash;
- (id)icon;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
