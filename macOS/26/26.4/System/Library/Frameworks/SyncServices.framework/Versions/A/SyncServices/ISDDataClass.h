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

- (id)category;
- (id)name;
- (id)versionInfo;
- (id)displayName;
- (void)setCategory:(id)a0;
- (id)bundle;
- (void)encodeWithCoder:(id)a0;
- (void)setImagePath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)imagePath;
- (id)replacementObjectForPortCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
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
