@class NSArray;

@interface ABCNContactDiff : NSObject

@property (readonly, copy) NSArray *updates;

- (id)description;
- (void)dealloc;
- (id)initWithUpdates:(id)a0;
- (void)applyToABCDContact:(id)a0 inAddressBook:(id)a1;
- (void)applyToABPerson:(id)a0 inAddressBook:(id)a1;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToMutableContacts:(id)a0 withIdentifierMap:(id)a1;
- (id)contactByApplyingUpdatesToContact:(id)a0;

@end
