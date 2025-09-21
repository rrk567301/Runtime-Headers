@class NSString, NSNumber;

@interface SKGInteractionEdge : SKGEdge {
    NSNumber *_score;
}

@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *relationship;

+ (id)filter;
+ (id)filterWithDomainIdentifier:(id)a0;

- (id)propertyDictionary;
- (id)score;
- (id)label;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initWithSourceNode:(id)a0 targetNode:(id)a1 domainIdentifier:(id)a2 relationship:(id)a3 score:(id)a4;

@end
