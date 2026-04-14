@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)fileID;
- (id)parentItemID;
- (id)extendedAttributes;
- (BOOL)isUserVisible;
- (BOOL)isShareableItem;
- (unsigned char)itemScope;
- (BOOL)isDirectoryFault;
- (BOOL)isFSRoot;
- (BOOL)isZoneRoot;
- (id)st;
- (id)asFSRoot;
- (id)parentItemOnFS;
- (BOOL)saveToDB;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;

@end
