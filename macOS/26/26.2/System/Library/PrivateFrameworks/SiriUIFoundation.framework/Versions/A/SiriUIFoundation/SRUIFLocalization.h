@class NSString, NSBundle, AFLocalization;

@interface SRUIFLocalization : NSObject {
    NSBundle *_bundle;
    NSString *_tableName;
    AFLocalization *_localization;
}

- (void).cxx_destruct;
- (id)init;
- (id)localizedStringWithSiriLanguageForKey:(id)a0;
- (id)initWithBundle:(id)a0 tableName:(id)a1;
- (id)localizedStringForLanguageCode:(id)a0 key:(id)a1;

@end
