@class NSString, NSImage;

@interface ACSHActionOpenApp : ACSHAction {
    NSString *_name;
    NSImage *_icon;
}

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *absolutePath;

+ (id)actionBundleID:(id)a0 absolutePath:(id)a1;

- (id)init;
- (id)name;
- (id)icon;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_configureWithPlistDictionary:(id)a0;
- (void)_resetDisplayValues;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;
- (id)resolvedPath;

@end
