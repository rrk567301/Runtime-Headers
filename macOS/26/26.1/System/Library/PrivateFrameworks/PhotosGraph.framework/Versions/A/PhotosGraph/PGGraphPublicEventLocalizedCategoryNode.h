@class NSString;

@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode {
    NSString *_label;
}

@property (readonly) unsigned char level : 8;

- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)propertyDictionary;
- (unsigned short)domain;
- (id)description;
- (void).cxx_destruct;
- (id)label;
- (id)initWithLabel:(id)a0 level:(unsigned long long)a1;

@end
