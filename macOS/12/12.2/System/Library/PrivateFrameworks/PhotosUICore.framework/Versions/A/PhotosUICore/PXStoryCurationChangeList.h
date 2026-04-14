@class NSSet, NSString;

@interface PXStoryCurationChangeList : NSObject

@property (readonly, nonatomic) BOOL hasAnyChange;
@property (readonly, nonatomic) NSSet *promotedIdentifiers;
@property (readonly, nonatomic) NSSet *demotedIdentifiers;
@property (readonly, nonatomic) NSString *diagnosticDescription;

+ (id)changeListByCombiningChangeList:(id)a0 withChangeList:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPromotedIdentifiers:(id)a0 demotedIdentifiers:(id)a1;
- (id)changeListByPromotingIdentifiers:(id)a0;
- (id)changeListByDemotingIdentifiers:(id)a0;
- (id)changeListByApplyingChangeList:(id)a0;

@end
