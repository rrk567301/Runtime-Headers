@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (BOOL)isShareableItem;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (BOOL)isFSRoot;
- (id)extendedAttributes;
- (BOOL)isZoneRoot;
- (BOOL)isDirectoryFault;
- (id)parentItemOnFS;
- (id)asFSRoot;
- (BOOL)saveToDB;
- (id)parentItemID;
- (BOOL)isUserVisible;
- (id)st;
- (unsigned char)itemScope;

@end
