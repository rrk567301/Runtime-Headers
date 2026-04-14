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

- (id)bundle;
- (id)displayName;
- (unsigned long long)hash;
- (id)versionInfo;
- (void)setCategory:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)category;
- (void)setImagePath:(id)a0;
- (id)description;
- (id)imagePath;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)replacementObjectForPortCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)longName;
- (void)setVersionInfo:(id)a0;
- (id)appProviderIdentifier;
- (id)bundleRef;
- (id)fastName;
- (BOOL)morphInToObject:(id)a0;
- (void)setAppProviderIdentifier:(id)a0;
- (void)setBundleRef:(id)a0;
- (void)setLongName:(id)a0;
- (void)setUIHelperClassName:(id)a0;
- (id)singularDisplayName;
- (Class)uiHelperClass;
- (id)uiHelperClassName;

@end
