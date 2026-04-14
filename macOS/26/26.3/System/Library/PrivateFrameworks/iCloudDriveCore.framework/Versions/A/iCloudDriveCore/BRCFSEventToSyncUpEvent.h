@class BRCItemID;

@interface BRCFSEventToSyncUpEvent : BRCEventMetric

@property (nonatomic) unsigned long long fileID;
@property (nonatomic) unsigned int genID;
@property (retain, nonatomic) BRCItemID *itemID;
@property (nonatomic) unsigned long long mtime;
@property (nonatomic) BOOL isPackage;
@property (nonatomic) unsigned long long syncUpBatchSize;
@property (nonatomic) unsigned long long contentSize;

- (id)subDescription;
- (id)associatedAppTelemetryEvent;
- (id)additionalPayload;
- (void).cxx_destruct;

@end
