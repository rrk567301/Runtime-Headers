@class NSObject, UARPController, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface UARPAnalyticsUpdateFirmwareManager : NSObject {
    UARPController *_controller;
    NSMutableArray *_stateArray;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_purgeTimer;
}

- (id)updateStatesForAccessoryID:(id)a0;
- (id)description;
- (void)configurePurgeTimer;
- (void)setAccessoryIDUnreachable:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateComplete:(id)a0;
- (id)initWithController:(id)a0 queue:(id)a1;
- (void)purgeStaleUpdateStateRecords;
- (void)stagingCompleteForAccessoryID:(id)a0 assetID:(id)a1 status:(unsigned long long)a2;
- (id)updateStateForAccessoryID:(id)a0 assetID:(id)a1;
- (void)stagingStartedForAccessoryID:(id)a0 assetID:(id)a1 userIntent:(BOOL)a2;

@end
