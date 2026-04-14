@class NSString, NSMutableArray;

@interface OADTextListStyle : NSObject {
    NSMutableArray *mParagraphProperties;
}

@property (retain, nonatomic) NSString *language;

+ (id)defaultObject;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)flatten;
- (id)defaultProperties;
- (id)initWithDefaults;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;
- (id)propertiesForListLevel:(unsigned long long)a0;
- (void)setPropertiesForListLevel:(unsigned long long)a0 properties:(id)a1;
- (void)overrideWithTextStyle:(id)a0;
- (void)enumerateParagraphPropertiesUsingBlock:(id /* block */)a0;

@end
