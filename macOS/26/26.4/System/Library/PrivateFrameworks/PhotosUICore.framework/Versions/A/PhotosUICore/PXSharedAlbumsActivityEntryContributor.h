@class NSString;

@interface PXSharedAlbumsActivityEntryContributor : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *email;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAvatarConfiguration:(id)a0;
- (id)initWithDisplayName:(id)a0 email:(id)a1;

@end
