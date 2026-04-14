@protocol WBSCloudTabProvider;

@interface LibraryItemCloudTabDevice : LibraryItem

@property (readonly, nonatomic) id<WBSCloudTabProvider> device;

- (id)initWithDevice:(id)a0;
- (id)icon;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
