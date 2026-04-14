@class NSString;

@interface PXSharedAlbumsActivityEntryContributor : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *email;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAvatarConfiguration:(id)a0;
- (id)initWithDisplayName:(id)a0 email:(id)a1;

@end
