@class BRCServerStatInfo;

@interface BRCSharedServerItem : BRCServerItem {
    BRCServerStatInfo *_aliasDerivedStructureForDescription;
}

- (id)st;
- (BOOL)isSharedToMeTopLevelItem;
- (id)aliasDerivedStructureForDescription;
- (BOOL)isSharedToMeChildItem;
- (id)parentItemOnFS;
- (id)fallbackParentServerItemOnFS;
- (id)parentItemIDOnFS;
- (id)parentLocalItemOnFS;
- (id)fallbackParentItemIDOnFS;
- (id)fallbackParentItemOnFS;
- (void).cxx_destruct;
- (id)fallbackParentAppLibraryOnFS;
- (id)aliasDerivedStructure;
- (id)originalSt;
- (id)parentZoneOnFS;
- (id)asSharedItem;

@end
