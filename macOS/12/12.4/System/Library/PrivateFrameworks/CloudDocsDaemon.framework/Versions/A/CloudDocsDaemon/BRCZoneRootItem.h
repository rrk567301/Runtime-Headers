@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)fileID;
- (id)parentItemID;
- (id)st;
- (BOOL)isZoneRoot;
- (BOOL)isFSRoot;
- (BOOL)isDirectoryFault;
- (BOOL)saveToDB;
- (BOOL)isShareableItem;
- (id)asFSRoot;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (id)parentItemOnFS;

@end
