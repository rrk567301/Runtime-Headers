@class BRCServerStatInfo;

@interface BRCSharedServerItem : BRCServerItem {
    BRCServerStatInfo *_aliasDerivedStructureForDescription;
}

- (id)aliasDerivedStructure;
- (id)asSharedItem;
- (BOOL)isSharedToMeTopLevelItem;
- (id)parentItemOnFS;
- (id)st;
- (id)parentLocalItemOnFS;
- (BOOL)isSharedToMeChildItem;
- (id)fallbackParentAppLibraryOnFS;
- (id)fallbackParentItemOnFS;
- (id)fallbackParentServerItemOnFS;
- (id)originalSt;
- (id)parentItemIDOnFS;
- (id)parentZoneOnFS;
- (id)aliasDerivedStructureForDescription;
- (void).cxx_destruct;
- (id)fallbackParentItemIDOnFS;

@end
