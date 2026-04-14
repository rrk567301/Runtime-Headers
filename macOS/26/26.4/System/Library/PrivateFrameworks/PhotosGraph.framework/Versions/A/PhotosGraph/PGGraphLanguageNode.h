@class NSString;

@interface PGGraphLanguageNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *localeIdentifier;

+ (id)filter;
+ (id)filterWithLocaleIdentifiers:(id)a0;

- (id)propertyDictionary;
- (id)propertyForKey:(id)a0;
- (BOOL)hasProperties:(id)a0;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)description;

@end
