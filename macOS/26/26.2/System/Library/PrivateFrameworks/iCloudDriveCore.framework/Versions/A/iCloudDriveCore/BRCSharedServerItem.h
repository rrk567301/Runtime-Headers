@class BRCServerStatInfo;

@interface BRCSharedServerItem : BRCServerItem {
    BRCServerStatInfo *_aliasDerivedStructureForDescription;
}

- (id)st;
- (BOOL)isSharedToMeTopLevelItem;
- (id)parentItemIDOnFS;
- (id)parentItemOnFS;
- (id)parentLocalItemOnFS;
- (id)asSharedItem;
- (id)parentZoneOnFS;
- (BOOL)isSharedToMeChildItem;
- (id)fallbackParentItemOnFS;
- (id)aliasDerivedStructure;
- (id)originalSt;
- (void).cxx_destruct;
- (id)fallbackParentItemIDOnFS;
- (id)fallbackParentServerItemOnFS;
- (id)fallbackParentAppLibraryOnFS;
- (id)aliasDerivedStructureForDescription;

@end
