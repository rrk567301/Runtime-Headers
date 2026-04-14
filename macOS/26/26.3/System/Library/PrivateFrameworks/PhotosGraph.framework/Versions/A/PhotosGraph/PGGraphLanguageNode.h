@class NSString;

@interface PGGraphLanguageNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *localeIdentifier;

+ (id)filter;
+ (id)filterWithLocaleIdentifiers:(id)a0;

- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)initWithLocaleIdentifier:(id)a0;

@end
