@class NSSet, NSArray, NSString, NSManagedObjectContext;

@interface ICParticipantsFilterTypeSelection : ICFilterTypeSelection

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) unsigned long long selectionType;
@property (nonatomic) unsigned long long joinOperator;
@property (retain, nonatomic) NSSet *participantUserIDs;
@property (readonly, nonatomic) NSArray *unresolvedParticipants;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *summaryWithJoinOperatorMenu;

+ (id)keyPathsForValuesAffectingIsEmpty;

- (BOOL)isValid;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addParticipantUserID:(id)a0;
- (id)initWithManagedObjectContext:(id)a0 accountObjectID:(id)a1;
- (id)initWithManagedObjectContext:(id)a0 accountObjectID:(id)a1 selectionType:(unsigned long long)a2;
- (id)initWithManagedObjectContext:(id)a0 accountObjectID:(id)a1 selectionType:(unsigned long long)a2 joinOperator:(unsigned long long)a3;
- (BOOL)isEqualToICParticipantsFilterTypeSelection:(id)a0;
- (id)rawFilterValue;
- (void)removeParticipantUserID:(id)a0;

@end
