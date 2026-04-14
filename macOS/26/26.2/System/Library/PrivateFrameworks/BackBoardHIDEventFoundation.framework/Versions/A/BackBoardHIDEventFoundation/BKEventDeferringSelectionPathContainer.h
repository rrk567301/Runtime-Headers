@class BKSHIDEventDeferringSelectionPathIdentifier, NSMutableDictionary, NSDictionary, NSMutableSet;

@interface BKEventDeferringSelectionPathContainer : NSObject <NSCopying> {
    BKSHIDEventDeferringSelectionPathIdentifier *_pathIdentifier;
    NSMutableSet *_includedIdentities;
    NSMutableDictionary *_subnodeSelectionHistoryByNodeIdentity;
    NSDictionary *_constraintAssertionsByNode;
    NSDictionary *_modalityAssertionsByNode;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_removeNode:(id)a0;
- (void).cxx_destruct;
- (id)copy;
- (id)description;
- (id)_keyForNode:(id)a0;

@end
