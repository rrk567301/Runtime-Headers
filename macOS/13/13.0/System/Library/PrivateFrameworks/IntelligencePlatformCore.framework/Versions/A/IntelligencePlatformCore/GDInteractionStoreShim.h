@interface GDInteractionStoreShim : NSObject

+ (id)interactionHistoryEnumerator;
+ (id)interactionHistoryEnumeratorWithPredicate:(id)a0 sortDescriptor:(id)a1;
+ (id)interactionFromCDInteraction:(id)a0;
+ (id)interactionHistoryFromStore:(id)a0;
+ (id)interactionHistoryEnumeratorFromStore:(id)a0;
+ (id)interactionHistoryEnumeratorFromStore:(id)a0 predicate:(id)a1 sortDescriptor:(id)a2;

@end
