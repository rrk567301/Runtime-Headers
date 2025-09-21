@class NSString, CPAnalytics;

@interface PGGraphUpdateHealthRecorder : NSObject <PGGraphUpdateHealthRecording> {
    CPAnalytics *_analytics;
}

@property (readonly, nonatomic) unsigned long long numberOfDatabaseChangesReceivedInForeground;
@property (readonly, nonatomic) unsigned long long numberOfDatabaseChangesReceivedInBackground;
@property (readonly, nonatomic) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInForeground;
@property (readonly, nonatomic) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInBackground;
@property (readonly, nonatomic) unsigned long long numberOfTimesGraphUpdatePaused;
@property (readonly, nonatomic) unsigned long long maximumTransactionSize;
@property (readonly, nonatomic, getter=isChangeConsumer) char changeConsumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginRecording;
- (void)endRecordingInBackground:(char)a0;
- (id)initForChangeConsumer:(char)a0 analytics:(id)a1;
- (void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)a0 inBackground:(char)a1;
- (void)recordNumberOfDatabaseChangesReceived:(unsigned long long)a0 inBackground:(char)a1;
- (void)recordNumberOfDaysSinceMajorOSUpgrade:(unsigned long long)a0;
- (void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)a0;
- (void)recordTransactionSize:(unsigned long long)a0;

@end
