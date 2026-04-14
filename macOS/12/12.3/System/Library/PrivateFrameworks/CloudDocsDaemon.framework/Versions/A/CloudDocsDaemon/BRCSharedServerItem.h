@interface BRCSharedServerItem : BRCServerItem

- (id)st;
- (BOOL)isSharedToMeTopLevelItem;
- (BOOL)isSharedToMeChildItem;
- (id)parentItemIDOnFS;
- (id)parentItemOnFS;
- (id)parentZoneOnFS;
- (id)asSharedItem;
- (id)aliasDerivedStructure;
- (id)parentLocalItemOnFS;
- (id)fallbackParentAppLibraryOnFS;
- (id)fallbackParentItemIDOnFS;
- (id)fallbackParentServerItemOnFS;
- (id)fallbackParentItemOnFS;
- (id)parentItemIDOnFSInDB:(id)a0;

@end
