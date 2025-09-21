@class NSSet, NSString;

@interface PXStoryCurationChangeList : NSObject

@property (readonly, nonatomic) char hasAnyChange;
@property (readonly, nonatomic) NSSet *promotedIdentifiers;
@property (readonly, nonatomic) NSSet *demotedIdentifiers;
@property (readonly, nonatomic) NSString *diagnosticDescription;

+ (id)changeListByCombiningChangeList:(id)a0 withChangeList:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)changeListByApplyingChangeList:(id)a0;
- (id)changeListByDemotingIdentifiers:(id)a0;
- (id)changeListByPromotingIdentifiers:(id)a0;
- (id)initWithPromotedIdentifiers:(id)a0 demotedIdentifiers:(id)a1;

@end
