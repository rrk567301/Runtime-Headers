@class NSIndexSet, NSString, PLIndexMapper, PLAssetContainerChangeNotification, PLFilteredAlbum;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification> {
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerChangeNotification *_backingNotification;
}

@property (readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationForDerivedObject:(id)a0 priorChangeState:(id)a1 forBackingObjectNotification:(id)a2;

- (id)init;
- (id)object;
- (void).cxx_destruct;
- (id)album;
- (id)_changedObjects;
- (BOOL)shouldReload;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)a0;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (BOOL)titleDidChange;
- (BOOL)keyAssetDidChange;
- (id)initWithFilteredAlbum:(id)a0 priorChangeState:(id)a1 albumChangeNotification:(id)a2;
- (BOOL)countDidChange;
- (id)_diffDescription;

@end
