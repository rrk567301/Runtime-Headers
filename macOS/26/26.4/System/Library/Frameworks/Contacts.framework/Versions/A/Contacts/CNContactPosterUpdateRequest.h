@class NSString, NSData, NSNumber;

@interface CNContactPosterUpdateRequest : CNContactPosterDataUpdateRequest <NSSecureCoding> {
    NSNumber *_ignoredForRevertNumber;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSData *watchWallpaperImageData;
@property (readonly, copy, nonatomic) NSString *posterIdentifier;
@property (readonly, nonatomic) BOOL ignoredForRevert;
@property (readonly, nonatomic) BOOL hasIgnoredForRevertValue;

+ (id)requestToUpdateIgnoredForRevert:(BOOL)a0 forPosterIdentifier:(id)a1;
+ (id)requestToUpdateWatchWallpaper:(id)a0 forContactIdentifier:(id)a1;

- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPosterIdentifier:(id)a0 ignoredForRevert:(BOOL)a1;
- (id)initWithWatchWallpaperImageData:(id)a0 contactIdentifier:(id)a1;
- (id)initWithWatchWallpaperImageData:(id)a0 contactIdentifier:(id)a1 posterIdentifier:(id)a2 ignoredForRevertBool:(BOOL)a3 hasIgnoredValue:(BOOL)a4;

@end
