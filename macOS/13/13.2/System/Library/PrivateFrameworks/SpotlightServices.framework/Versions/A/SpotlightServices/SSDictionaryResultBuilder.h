@class NSArray, SFRichText, NSString;

@interface SSDictionaryResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *definitionTexts;
@property (retain, nonatomic) SFRichText *wordText;
@property (retain, nonatomic) NSArray *definitions;
@property (retain, nonatomic) NSString *dictionaryName;
@property (retain, nonatomic) NSString *word;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildDescriptions;
- (id)buildTitle;

@end
