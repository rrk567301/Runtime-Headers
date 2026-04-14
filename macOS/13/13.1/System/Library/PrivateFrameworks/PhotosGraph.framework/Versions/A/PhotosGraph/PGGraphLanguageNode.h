@class NSString;

@interface PGGraphLanguageNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *localeIdentifier;

+ (id)filter;
+ (id)filterWithLocaleIdentifiers:(id)a0;

- (id)description;
- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
