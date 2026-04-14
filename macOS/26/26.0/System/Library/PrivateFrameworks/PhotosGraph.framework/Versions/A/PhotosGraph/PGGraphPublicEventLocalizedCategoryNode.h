@class NSString;

@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode {
    NSString *_label;
}

@property (readonly) unsigned char level : 8;

- (unsigned short)domain;
- (id)propertyDictionary;
- (BOOL)hasProperties:(id)a0;
- (id)label;
- (id)description;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 level:(unsigned long long)a1;

@end
