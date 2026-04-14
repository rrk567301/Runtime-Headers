@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)st;
- (BOOL)isZoneRoot;
- (id)parentItemOnFS;
- (unsigned char)itemScope;
- (BOOL)isShareableItem;
- (BOOL)isFSRoot;
- (BOOL)isDirectoryFault;
- (BOOL)saveToDB;
- (id)extendedAttributes;
- (id)asFSRoot;
- (id)parentItemID;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (BOOL)isUserVisible;

@end
