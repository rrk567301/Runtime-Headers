@class NSSet, NSDictionary;

@interface PhotosGraph.Node : NSObject <KGNode> {
    void /* function */ labels;
    void /* function */ properties;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, readonly) NSSet *labels;
@property (nonatomic, readonly) NSDictionary *properties;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2;
- (void)resolveIdentifier:(unsigned long long)a0;

@end
