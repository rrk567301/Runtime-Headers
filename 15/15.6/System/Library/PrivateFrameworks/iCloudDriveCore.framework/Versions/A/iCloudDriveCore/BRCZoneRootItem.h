@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)extendedAttributes;
- (id)parentItemID;
- (char)isUserVisible;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (char)isShareableItem;
- (id)asFSRoot;
- (char)isDirectoryFault;
- (char)isFSRoot;
- (char)isZoneRoot;
- (unsigned char)itemScope;
- (id)parentItemOnFS;
- (char)saveToDB;
- (id)st;

@end
