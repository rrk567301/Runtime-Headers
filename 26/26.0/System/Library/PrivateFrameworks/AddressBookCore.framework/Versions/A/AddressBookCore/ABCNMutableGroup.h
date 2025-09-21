@class NSString, ABCNGroup, ABCNGroupIdentifier;

@interface ABCNMutableGroup : ABCNGroup

@property (copy, nonatomic) ABCNGroup *snapshot;
@property (copy, nonatomic) ABCNGroupIdentifier *identifier;
@property (copy, nonatomic) NSString *name;

- (void)setSnapshot:(id)a0;
- (id)freeze;
- (void)setName:(id)a0;
- (id)copy;
- (void)setIdentifier:(id)a0;
- (id)freezeWithSelfAsSnapshot;

@end
