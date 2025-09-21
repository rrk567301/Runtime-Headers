@class NSUUID;

@interface KNRecordingSyncState : NSObject <NSCopying> {
    char _canClearOutOfSyncToken;
}

@property (readonly, nonatomic) NSUUID *outOfSyncToken;
@property (readonly, nonatomic, getter=isRecordingOutOfSync) char recordingOutOfSync;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithOutOfSyncToken:(id)a0 canClearOutOfSyncToken:(char)a1;
- (char)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)a0;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(char)a0 withLocalOutOfSyncToken:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
