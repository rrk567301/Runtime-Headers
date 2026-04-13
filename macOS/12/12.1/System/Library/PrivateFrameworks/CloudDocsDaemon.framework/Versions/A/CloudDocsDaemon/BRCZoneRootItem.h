@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)fileID;
- (id)parentItemID;
- (id)st;
- (BOOL)isFSRoot;
- (BOOL)isZoneRoot;
- (BOOL)saveToDB;
- (BOOL)isShareableItem;
- (id)asFSRoot;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (id)parentItemOnFS;

@end
