@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (unsigned char)itemScope;
- (id)st;
- (id)asFSRoot;
- (id)extendedAttributes;
- (BOOL)isShareableItem;
- (BOOL)isZoneRoot;
- (id)parentItemOnFS;
- (BOOL)isFSRoot;
- (BOOL)saveToDB;
- (BOOL)isDirectoryFault;
- (BOOL)isUserVisible;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (id)parentItemID;

@end
