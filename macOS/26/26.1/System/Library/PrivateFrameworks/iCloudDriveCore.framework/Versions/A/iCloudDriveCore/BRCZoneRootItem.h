@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (BOOL)isZoneRoot;
- (BOOL)isDirectoryFault;
- (BOOL)saveToDB;
- (BOOL)isShareableItem;
- (BOOL)isFSRoot;
- (id)extendedAttributes;
- (id)parentItemOnFS;
- (id)asFSRoot;
- (id)parentItemID;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (id)st;
- (unsigned char)itemScope;
- (BOOL)isUserVisible;

@end
