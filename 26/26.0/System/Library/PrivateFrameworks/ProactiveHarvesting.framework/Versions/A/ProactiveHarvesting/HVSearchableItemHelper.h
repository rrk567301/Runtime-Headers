@interface HVSearchableItemHelper : NSObject

+ (BOOL)mailItemIsInDrafts:(id)a0 mailboxIdentifiers:(id)a1;
+ (id)deserializeAttributesAndBody:(id)a0;
+ (BOOL)mailItemIsTooBig:(id)a0;
+ (id)deserializeAttributes:(id)a0;
+ (id)serializeAttributesAndBody:(id)a0;
+ (BOOL)mailItemIsValid:(id)a0 emailHeaders:(id)a1 mailboxIdentifiers:(id)a2;
+ (BOOL)mailItemIsInSent:(id)a0;
+ (BOOL)searchableItemIsEmpty:(id)a0;
+ (id)mailItemMessageIdHeaderValues:(id)a0;
+ (BOOL)mailItemIsInDrafts:(id)a0;
+ (BOOL)mailItemIsFromSupportedAccount:(id)a0;
+ (BOOL)mailItemIsInTrash:(id)a0 mailboxIdentifiers:(id)a1;
+ (id)messageIdHeaderValuesFromHeaders:(id)a0;
+ (id)htmlContentDataNoCopyRetainingBackingBuffer:(id)a0;
+ (BOOL)mailItemIsValid:(id)a0;
+ (BOOL)mailItemIsSPAM:(id)a0;
+ (BOOL)mailItemIsSPAM:(id)a0 emailHeaders:(id)a1 mailboxIdentifiers:(id)a2;
+ (BOOL)searchableItemIsOutgoing:(id)a0;
+ (id)textContentNoCopyRetainingBackingBuffer:(id)a0;
+ (BOOL)mailItemIsRecent:(id)a0;
+ (BOOL)mailItemIsInSent:(id)a0 mailboxIdentifiers:(id)a1;
+ (BOOL)mailItemIsRecent:(id)a0 emailHeaders:(id)a1;
+ (id)deserializeAttributes:(id)a0 andBody:(id)a1;
+ (BOOL)mailItemIsInTrash:(id)a0;
+ (id)sanitizeHandles:(id)a0;

@end
