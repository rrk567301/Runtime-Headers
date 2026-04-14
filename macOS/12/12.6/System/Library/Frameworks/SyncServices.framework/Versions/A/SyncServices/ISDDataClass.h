@class NSString, ISDFileReference, NSMutableArray;

@interface ISDDataClass : ISDDataObject <NSCoding> {
    NSString *_name;
    ISDFileReference *_bundleRef;
    NSString *_uiHelperClassName;
    NSString *_imagePath;
    NSString *_appProviderIdentifier;
    NSString *_category;
    NSString *_longName;
    NSMutableArray *_versionInfo;
}

+ (void)initialize;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)displayName;
- (id)category;
- (void)setCategory:(id)a0;
- (id)bundle;
- (id)versionInfo;
- (id)imagePath;
- (void)setImagePath:(id)a0;
- (id)longName;
- (void)setVersionInfo:(id)a0;
- (id)fastName;
- (id)bundleRef;
- (BOOL)morphInToObject:(id)a0;
- (id)uiHelperClassName;
- (void)setBundleRef:(id)a0;
- (void)setUIHelperClassName:(id)a0;
- (void)setLongName:(id)a0;
- (id)singularDisplayName;
- (Class)uiHelperClass;
- (id)appProviderIdentifier;
- (void)setAppProviderIdentifier:(id)a0;

@end
