@class NSString;

@interface PXSharedAlbumsActivityEntryContributor : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *email;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAvatarConfiguration:(id)a0;
- (id)initWithDisplayName:(id)a0 email:(id)a1;

@end
