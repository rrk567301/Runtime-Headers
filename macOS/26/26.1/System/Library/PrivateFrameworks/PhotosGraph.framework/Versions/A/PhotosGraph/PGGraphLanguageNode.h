@class NSString;

@interface PGGraphLanguageNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *localeIdentifier;

+ (id)filter;
+ (id)filterWithLocaleIdentifiers:(id)a0;

- (BOOL)hasProperties:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)propertyDictionary;
- (unsigned short)domain;
- (id)description;
- (void).cxx_destruct;
- (id)label;

@end
