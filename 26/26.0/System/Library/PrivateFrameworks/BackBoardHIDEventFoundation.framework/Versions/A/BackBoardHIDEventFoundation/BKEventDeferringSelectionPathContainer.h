@class BKSHIDEventDeferringSelectionPathIdentifier, NSMutableDictionary, NSDictionary, NSMutableSet;

@interface BKEventDeferringSelectionPathContainer : NSObject <NSCopying> {
    BKSHIDEventDeferringSelectionPathIdentifier *_pathIdentifier;
    NSMutableSet *_includedIdentities;
    NSMutableDictionary *_subnodeSelectionHistoryByNodeIdentity;
    NSDictionary *_constraintAssertionsByNode;
    NSDictionary *_modalityAssertionsByNode;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)description;
- (BOOL)_removeNode:(id)a0;
- (void).cxx_destruct;
- (id)_keyForNode:(id)a0;

@end
