@class NSMapTable, NSPasteboard;

@interface _NSPasteboardOwnersCollection : NSObject {
    NSMapTable *_ownersByIndex;
    NSMapTable *_ownerCounts;
    NSPasteboard *_pasteboard;
}

- (void)dealloc;
- (id)initWithPasteboard:(id)a0;
- (void).cxx_destruct;
- (void)removeOwnerForTypeIdentifier:(id)a0 atIndex:(unsigned long long)a1;
- (void)setOwner:(id)a0 forTypeIdentifier:(id)a1 atIndex:(unsigned long long)a2;
- (void)handleOwnershipChange;
- (void)_decrementCountForOwner:(id)a0;
- (void)_incrementCountForOwner:(id)a0;

@end
