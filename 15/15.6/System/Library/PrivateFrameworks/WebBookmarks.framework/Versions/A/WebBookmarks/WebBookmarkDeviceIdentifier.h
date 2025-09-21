@class NSUUID, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WebBookmarkDeviceIdentifier : NSObject {
    NSURL *_plistURL;
    NSUUID *_UUID;
    char _encounteredErrorWhileObtainingUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fileMonitor;
}

@property (nonatomic, getter=_listensForMetaDataChangeNotification, setter=_setListensForMetaDataChangeNotification:) char listensForMetaDataChangeNotification;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) char encounteredErrorWhileObtainingUUID;
@property (nonatomic, getter=isReadOnly) char readOnly;

+ (void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)a0;
+ (void)clearDeviceIdentifierWithPlistURL:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)stopObservingChanges;
- (void)_cancelMonitoringMetaDataFile;
- (void)_createOrLoadMetaData;
- (void)_metaDataDidChange:(id)a0;
- (void)_resumeMonitoringMetaDataFile;
- (void)_setUpWithPlistURL:(id)a0 readOnly:(char)a1 queue:(id)a2;
- (id)initWithPlistURL:(id)a0 readOnly:(char)a1;

@end
