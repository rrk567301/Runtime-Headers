@class NSString;

@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode {
    NSString *_label;
}

@property (readonly) unsigned char level : 8;

- (id)propertyDictionary;
- (BOOL)hasProperties:(id)a0;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLabel:(id)a0 level:(unsigned long long)a1;

@end
