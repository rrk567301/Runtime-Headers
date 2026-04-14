@class NSString, NSImage;

@interface ACSHActionOpenApp : ACSHAction {
    NSString *_name;
    NSImage *_icon;
}

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *absolutePath;

+ (id)actionBundleID:(id)a0 absolutePath:(id)a1;

- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)icon;
- (void)performWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)resolvedPath;
- (void)_resetDisplayValues;
- (id)paramDictionaryForSaving;
- (id)paramDescription;

@end
