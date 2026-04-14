@class NSURL, KHThemeManifest, KHThemeDatabase;

@interface KHThemeBundle : NSObject {
    KHThemeDatabase *_database;
    NSURL *_manifestURL;
}

@property (readonly, nonatomic) KHThemeManifest *manifest;
@property (readonly, nonatomic) KHThemeDatabase *database;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly) unsigned long long numberOfThemes;

+ (id)bundleWithURL:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)closeDatabase;
- (id)themesForProductCodes:(id)a0;
- (id)themesForProjectType:(long long)a0;
- (id)previewImageForThemeIdentifier:(id)a0 andProductCode:(id)a1;

@end
