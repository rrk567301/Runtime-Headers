@class NSString, MSVStreamWriter;

@interface ML3ProtoSyncExportSession : ML3ExportSession {
    NSString *_libraryUUID;
    int _syncType;
    MSVStreamWriter *_streamWriter;
    struct { int trackAdds; int trackUpdates; int trackDeletes; int playlistAdds; int playlistDeletes; int playlistUpdates; int artistAdds; int artistUpdates; int albumUpdates; int pinAdds; unsigned int totalSize; } _stats;
    double _sessionStartTime;
}

- (id)end;
- (void).cxx_destruct;
- (id)begin:(unsigned int)a0;
- (id)_writSyncPackageToStream:(id)a0;
- (id)exportAlbumArtistAdded:(unsigned long long)a0;
- (id)exportAlbumArtistDeleted:(unsigned long long)a0;
- (id)exportAlbumArtistUpdated:(unsigned long long)a0;
- (id)exportAlbumUpdated:(unsigned long long)a0;
- (id)exportLibraryPinWithCloudItemID:(long long)a0 cloudLibraryID:(id)a1 defaultAtion:(long long)a2 type:(long long)a3 position:(long long)a4 positionUUID:(id)a5;
- (id)exportPlaylistAdded:(unsigned long long)a0;
- (id)exportPlaylistDeleted:(unsigned long long)a0;
- (id)exportPlaylistUpdated:(unsigned long long)a0;
- (id)exportTrackAdded:(unsigned long long)a0;
- (id)exportTrackDeleted:(unsigned long long)a0;
- (id)exportTrackUpdated:(unsigned long long)a0;
- (id)initWithLibrary:(id)a0 outputStream:(id)a1 syncType:(int)a2;

@end
