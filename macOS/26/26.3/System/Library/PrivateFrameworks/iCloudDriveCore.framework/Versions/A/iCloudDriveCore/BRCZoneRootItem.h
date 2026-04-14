@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)st;
- (id)asFSRoot;
- (id)extendedAttributes;
- (BOOL)saveToDB;
- (unsigned char)itemScope;
- (id)parentItemOnFS;
- (BOOL)isDirectoryFault;
- (BOOL)isFSRoot;
- (BOOL)isShareableItem;
- (BOOL)isZoneRoot;
- (BOOL)isUserVisible;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (id)parentItemID;

@end
