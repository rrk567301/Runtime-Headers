@class NSUUID, NSMutableSet;

@interface BRCUserDownloadEvent : BRCEventMetric

@property (retain, nonatomic) NSUUID *operationID;
@property (retain, nonatomic) NSMutableSet *fileObjectIDs;
@property (nonatomic) BOOL didSucceed;
@property (nonatomic) BOOL isDownloadingForBackup;
@property (nonatomic) BOOL isRecursiveDownload;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long totalContentSize;

- (id)additionalPayload;
- (id)init;
- (id)associatedAppTelemetryEvent;
- (id)subDescription;
- (void).cxx_destruct;

@end
