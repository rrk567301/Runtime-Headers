@class VIObjectCategory, NSString, VIOntologyNode, VIObjectKnowledge;

@interface VIRegionOfInterestResultItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) VIObjectCategory *objectCategory;
@property (readonly, nonatomic) VIOntologyNode *ontologyNode;
@property (readonly, nonatomic) VIObjectKnowledge *objectKnowledge;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 ontologyNode:(id)a1 objectKnowledge:(id)a2;

@end
