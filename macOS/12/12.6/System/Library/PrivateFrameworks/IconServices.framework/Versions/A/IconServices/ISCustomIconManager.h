@interface ISCustomIconManager : NSObject

+ (id)sharedInstance;
+ (id)overrideTypeMapping;
+ (id)defaultSpecialFolderTypeMapping;

- (id)_init;
- (id)specialFolderTypeForURL:(id)a0;
- (id)overrideResourceForBundleIdentifier:(id)a0;
- (id)overrideIconForURL:(id)a0;

@end
