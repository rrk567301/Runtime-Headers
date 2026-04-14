@interface BRCSharedServerItem : BRCServerItem

- (BOOL)isSharedToMeTopLevelItem;
- (BOOL)isSharedToMeChildItem;
- (id)st;
- (id)parentItemOnFS;
- (id)asSharedItem;
- (id)parentLocalItemOnFS;
- (id)parentZoneOnFS;
- (id)parentItemIDOnFS;
- (id)fallbackParentAppLibraryOnFS;
- (id)fallbackParentItemOnFS;
- (id)fallbackParentServerItemOnFS;
- (id)fallbackParentItemIDOnFS;
- (id)parentItemIDOnFSInDB:(id)a0;
- (id)aliasDerivedStructure;

@end
