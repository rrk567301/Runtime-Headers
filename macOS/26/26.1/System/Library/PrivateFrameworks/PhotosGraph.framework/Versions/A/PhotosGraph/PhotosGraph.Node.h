@class NSSet, NSDictionary;

@interface PhotosGraph.Node : NSObject <KGNode> {
    void /* function */ labels;
    void /* function */ properties;
}

@property (nonatomic) unsigned long long identifier;
@property (nonatomic, readonly) NSSet *labels;
@property (nonatomic, readonly) NSDictionary *properties;

- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2;
- (void)resolveIdentifier:(unsigned long long)a0;

@end
