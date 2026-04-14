@class NSString, NSImage;

@interface ACSHActionOpenApp : ACSHAction {
    NSString *_name;
    NSImage *_icon;
}

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *absolutePath;

+ (id)actionBundleID:(id)a0 absolutePath:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)icon;
- (void)performWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (void)_resetDisplayValues;
- (id)resolvedPath;
- (id)paramDictionaryForSaving;
- (id)paramDescription;

@end
