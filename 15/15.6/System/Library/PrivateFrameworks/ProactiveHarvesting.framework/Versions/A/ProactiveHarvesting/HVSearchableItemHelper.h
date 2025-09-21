@interface HVSearchableItemHelper : NSObject

+ (char)mailItemIsSPAM:(id)a0;
+ (id)deserializeAttributes:(id)a0 andBody:(id)a1;
+ (char)mailItemIsInSent:(id)a0;
+ (char)mailItemIsInTrash:(id)a0;
+ (char)mailItemIsValid:(id)a0;
+ (id)mailItemMessageIdHeaderValues:(id)a0;
+ (id)messageIdHeaderValuesFromHeaders:(id)a0;
+ (id)sanitizeHandles:(id)a0;
+ (char)searchableItemIsOutgoing:(id)a0;
+ (id)textContentNoCopyRetainingBackingBuffer:(id)a0;
+ (char)mailItemIsFromSupportedAccount:(id)a0;
+ (id)deserializeAttributes:(id)a0;
+ (id)deserializeAttributesAndBody:(id)a0;
+ (id)htmlContentDataNoCopyRetainingBackingBuffer:(id)a0;
+ (char)mailItemIsInDrafts:(id)a0;
+ (char)mailItemIsInDrafts:(id)a0 mailboxIdentifiers:(id)a1;
+ (char)mailItemIsInSent:(id)a0 mailboxIdentifiers:(id)a1;
+ (char)mailItemIsInTrash:(id)a0 mailboxIdentifiers:(id)a1;
+ (char)mailItemIsRecent:(id)a0;
+ (char)mailItemIsRecent:(id)a0 emailHeaders:(id)a1;
+ (char)mailItemIsSPAM:(id)a0 emailHeaders:(id)a1 mailboxIdentifiers:(id)a2;
+ (char)mailItemIsTooBig:(id)a0;
+ (char)mailItemIsValid:(id)a0 emailHeaders:(id)a1 mailboxIdentifiers:(id)a2;
+ (char)searchableItemIsEmpty:(id)a0;
+ (id)serializeAttributesAndBody:(id)a0;

@end
