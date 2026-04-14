@class NSArray;

@interface CNContactDiff : NSObject

@property (readonly, copy) NSArray *updates;

+ (id)diffContact:(id)a0 to:(id)a1 error:(id *)a2;
+ (BOOL)hasExternalImageURIBeenChangedForContact:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUpdates:(id)a0;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToABCDContact:(id)a0;
- (id)contactByApplyingUpdatesToContact:(id)a0;
- (void)applyToMutableContacts:(id)a0 withIdentifierMap:(id)a1;
- (void)resetExternalImageURIForContact:(id)a0;

@end
