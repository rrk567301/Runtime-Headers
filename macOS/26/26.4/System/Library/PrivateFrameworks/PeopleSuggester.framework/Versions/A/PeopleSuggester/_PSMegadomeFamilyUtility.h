@class CNContactStore, _PSContactResolver;

@interface _PSMegadomeFamilyUtility : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) _PSContactResolver *contactResolver;

+ (id)taggingOptions;

- (void).cxx_destruct;
- (id)init;
- (id)megadomeResultsForFamilyTagWithError:(id *)a0;
- (id)peopleViewWithError:(id *)a0;
- (id)familyRecipientsFromMegadomeWithError:(id *)a0;
- (id)recipientFromMegadomePerson:(id)a0;
- (id)recipientsFromScoredEntities:(id)a0 inVisualIdentifierView:(id)a1;

@end
