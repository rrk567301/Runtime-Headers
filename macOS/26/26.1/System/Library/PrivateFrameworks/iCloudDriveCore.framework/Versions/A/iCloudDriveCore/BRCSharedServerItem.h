@class BRCServerStatInfo;

@interface BRCSharedServerItem : BRCServerItem {
    BRCServerStatInfo *_aliasDerivedStructureForDescription;
}

- (id)parentItemIDOnFS;
- (id)fallbackParentItemOnFS;
- (id)asSharedItem;
- (id)fallbackParentItemIDOnFS;
- (id)parentItemOnFS;
- (id)parentZoneOnFS;
- (id)aliasDerivedStructure;
- (id)parentLocalItemOnFS;
- (BOOL)isSharedToMeTopLevelItem;
- (id)fallbackParentAppLibraryOnFS;
- (void).cxx_destruct;
- (id)originalSt;
- (BOOL)isSharedToMeChildItem;
- (id)fallbackParentServerItemOnFS;
- (id)st;
- (id)aliasDerivedStructureForDescription;

@end
