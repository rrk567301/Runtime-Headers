@class NSArray, NSDictionary;

@interface ISGraphicIconConfigurationParser : ISIconConfigurationMarkupParser

@property (readonly) NSArray *symbolColors;
@property (readonly) NSArray *enclosureColors;
@property (readonly) long long renderingMode;
@property (readonly) NSDictionary *aliasedConfigurationDictionary;

- (id)symbolName;

@end
