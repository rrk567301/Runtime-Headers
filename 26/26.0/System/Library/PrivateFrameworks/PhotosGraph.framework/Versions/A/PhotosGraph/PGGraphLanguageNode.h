@class NSString;

@interface PGGraphLanguageNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSString *localeIdentifier;

+ (id)filter;
+ (id)filterWithLocaleIdentifiers:(id)a0;

- (unsigned short)domain;
- (id)propertyForKey:(id)a0;
- (id)propertyDictionary;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)description;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;

@end
