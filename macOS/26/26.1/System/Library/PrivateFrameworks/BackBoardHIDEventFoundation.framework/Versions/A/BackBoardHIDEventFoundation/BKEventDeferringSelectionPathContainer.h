@class BKSHIDEventDeferringSelectionPathIdentifier, NSMutableDictionary, NSDictionary, NSMutableSet;

@interface BKEventDeferringSelectionPathContainer : NSObject <NSCopying> {
    BKSHIDEventDeferringSelectionPathIdentifier *_pathIdentifier;
    NSMutableSet *_includedIdentities;
    NSMutableDictionary *_subnodeSelectionHistoryByNodeIdentity;
    NSDictionary *_constraintAssertionsByNode;
    NSDictionary *_modalityAssertionsByNode;
}

- (id)copy;
- (BOOL)_removeNode:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_keyForNode:(id)a0;

@end
