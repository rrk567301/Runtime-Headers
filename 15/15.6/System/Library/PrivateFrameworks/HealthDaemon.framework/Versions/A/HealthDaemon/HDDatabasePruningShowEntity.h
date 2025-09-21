@class NSString, NSDictionary, HDSyncEntityIdentifier, NSNumber;

@interface HDDatabasePruningShowEntity : NSObject

@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) HDSyncEntityIdentifier *identifier;
@property (readonly, nonatomic) char supportsPruning;
@property (readonly, nonatomic) char supportsPruningRestrictionPredicates;
@property (readonly, nonatomic) NSNumber *maximumPruningAnchor;
@property (readonly, nonatomic) NSDictionary *pruningRestrictionPredicates;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClassName:(id)a0 identifier:(id)a1 supportsPruning:(char)a2 supportsPruningRestrictionPredicates:(char)a3 maximumPruningAnchor:(id)a4 pruningRestrictionPredicates:(id)a5;

@end
