@class BRCServerStatInfo;

@interface BRCSharedServerItem : BRCServerItem {
    BRCServerStatInfo *_aliasDerivedStructureForDescription;
}

- (BOOL)isSharedToMeTopLevelItem;
- (BOOL)isSharedToMeChildItem;
- (id)st;
- (id)aliasDerivedStructure;
- (id)parentZoneOnFS;
- (id)parentItemOnFS;
- (id)appLibrary;
- (id)topLevelSharedItemID;
- (id)asSharedItem;
- (id)parentItemIDOnFS;
- (void).cxx_destruct;
- (id)fallbackParentServerItemOnFS;
- (id)fallbackParentItemOnFS;
- (id)fallbackParentAppLibraryOnFS;
- (id)fallbackParentItemIDOnFS;
- (id)originalSt;
- (id)aliasDerivedStructureForDescription;
- (id)parentLocalItemOnFS;

@end
