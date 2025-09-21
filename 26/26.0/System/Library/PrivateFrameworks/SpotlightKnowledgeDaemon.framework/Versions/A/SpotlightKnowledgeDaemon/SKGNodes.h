@class MANodeFilter;

@interface SKGNodes : MANodeCollection

@property (class, readonly, nonatomic) Class nodeClass;
@property (class, readonly, nonatomic) Class edgeClass;
@property (class, readonly, nonatomic) MANodeFilter *filter;

@property (nonatomic) unsigned long long nodeIdentifier;

+ (id)labels;
+ (id)nodesInGraph:(id)a0;
+ (id)subsetInCollection:(id)a0;
+ (id)nodesWithIdentifier:(unsigned long long)a0 inGraph:(id)a1;
+ (id)nodesWithNode:(id)a0 inGraph:(id)a1;

- (id)domains;
- (id)contacts;
- (id)entities;
- (id)names;
- (id)users;
- (BOOL)isEqual:(id)a0;
- (id)emails;
- (id)displayNames;
- (id)photos;
- (id)nameKeys;
- (id)phones;
- (id)persons;
- (id)references;
- (BOOL)isEqualToNodes:(id)a0;
- (void)enumerateNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithNode:(id)a0 inGraph:(id)a1;
- (id)personas;
- (id)personasWithPersona:(id)a0 inGraph:(id)a1;

@end
