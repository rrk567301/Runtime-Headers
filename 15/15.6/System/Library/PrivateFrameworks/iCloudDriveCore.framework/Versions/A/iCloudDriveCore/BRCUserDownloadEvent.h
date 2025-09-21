@class NSUUID, NSMutableSet;

@interface BRCUserDownloadEvent : BRCEventMetric

@property (retain, nonatomic) NSUUID *operationID;
@property (retain, nonatomic) NSMutableSet *fileObjectIDs;
@property (nonatomic) char didSucceed;
@property (nonatomic) char isDownloadingForBackup;
@property (nonatomic) char isRecursiveDownload;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long totalContentSize;

- (id)init;
- (void).cxx_destruct;
- (id)additionalPayload;
- (id)associatedAppTelemetryEvent;
- (id)subDescription;

@end
