@class NSArray, NSDictionary, NSString;

@interface KGMemoryNode : NSObject <KGNode>

@property (readonly, nonatomic) unsigned long long identifier;
@property (nonatomic) float weight;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (copy, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)resolveIdentifier:(unsigned long long)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;

@end
