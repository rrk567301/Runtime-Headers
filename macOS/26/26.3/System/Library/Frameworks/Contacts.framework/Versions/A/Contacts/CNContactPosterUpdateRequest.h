@class NSString, NSArray;

@interface CNContactPosterUpdateRequest : CNContactPosterDataUpdateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSArray *watchWallpaperImages;

+ (id)requestToUpdateWatchWallpaper:(id)a0 forContactIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWatchWallpaperImages:(id)a0 contactIdentifier:(id)a1;

@end
