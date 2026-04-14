@class NSString, NSBundle;

@interface SAFLocalization : NSObject {
    void /* function */ tableName;
    void /* unknown type, empty encoding */ localization;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *tableName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundle:(id)a0 tableName:(id)a1;
- (id)localizedStringForLanguageCode:(id)a0 key:(id)a1;
- (id)localizedStringWithSiriLanguageForKey:(id)a0;

@end
