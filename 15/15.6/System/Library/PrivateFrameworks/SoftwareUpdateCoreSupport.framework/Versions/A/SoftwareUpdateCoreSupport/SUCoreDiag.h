@class NSObject, NSString, SUCoreDiagStats, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SUCoreDiag : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackingQueue;
@property (retain, nonatomic) NSMutableArray *trackingHistory;
@property (retain, nonatomic) SUCoreDiagStats *trackStats;
@property (retain, nonatomic) NSString *uniqueInstanceName;
@property (retain, nonatomic) NSString *appendingDumpFilename;
@property (retain, nonatomic) NSString *lastReportedUUID;
@property (nonatomic) char isSharedDiag;

+ (id)sharedDiag;

- (void).cxx_destruct;
- (id)instanceName;
- (void)dumpTracked:(id)a0 dumpingTo:(long long)a1 usingFilename:(id)a2 clearingStatistics:(char)a3 clearingHistory:(char)a4;
- (id)initWithAppendedDomain:(id)a0 appendingDumpFilename:(id)a1;
- (void)trackAnomaly:(id)a0 forReason:(id)a1 withResult:(long long)a2 withError:(id)a3;
- (void)trackBegin:(id)a0 atLevel:(int)a1 forModule:(id)a2;
- (void)trackEnd:(id)a0 atLevel:(int)a1 forModule:(id)a2;
- (void)trackEnd:(id)a0 atLevel:(int)a1 forModule:(id)a2 withResult:(long long)a3 withError:(id)a4;
- (void)trackError:(id)a0 forReason:(id)a1 withResult:(long long)a2 withError:(id)a3;
- (void)trackEnd:(id)a0 atLevel:(int)a1 forModule:(id)a2 withIdentifier:(id)a3 withResult:(long long)a4 withError:(id)a5;
- (void)_appendToHistory:(id)a0;
- (id)_copyTrackedStatsClearingAfter:(char)a0 droppingMatchedIndications:(long long)a1;
- (void)_dumpEvent:(id)a0;
- (id)_dumpMaskToString:(long long)a0;
- (void)_dumpToFile:(id)a0 dumpingDict:(id)a1 forReason:(id)a2;
- (void)_dumpTracked:(id)a0 dumpingTo:(long long)a1 usingFilename:(id)a2 clearingStatistics:(char)a3 clearingHistory:(char)a4;
- (void)_logTrackedError:(id)a0 fromLocation:(id)a1 forReason:(id)a2 withResult:(long long)a3 withError:(id)a4;
- (long long)allIndications;
- (void)collectTrackedStatsClearingAfter:(char)a0 completion:(id /* block */)a1;
- (void)collectTrackedStatsClearingAfter:(char)a0 droppingMatchedIndications:(long long)a1 completion:(id /* block */)a2;
- (id)copyTrackedStatsClearingAfter:(char)a0;
- (id)copyTrackedStatsClearingAfter:(char)a0 droppingMatchedIndications:(long long)a1;
- (id)loadDump:(id)a0;
- (void)trackBegin:(id)a0;
- (void)trackBegin:(id)a0 atLevel:(int)a1;
- (void)trackBegin:(id)a0 atLevel:(int)a1 forModule:(id)a2 withIdentifier:(id)a3;
- (void)trackEnd:(id)a0;
- (void)trackEnd:(id)a0 atLevel:(int)a1;
- (void)trackEnd:(id)a0 atLevel:(int)a1 withResult:(long long)a2 withError:(id)a3;
- (void)trackEnd:(id)a0 withResult:(long long)a1 withError:(id)a2;
- (void)trackFailure:(id)a0 forReason:(id)a1 withResult:(long long)a2 withError:(id)a3;
- (void)trackFault:(id)a0 forReason:(id)a1 withResult:(long long)a2 withError:(id)a3;
- (void)trackLastReportedUUID:(id)a0;
- (void)trackStateEvent:(id)a0 previousState:(id)a1 handlingEvent:(id)a2 nextState:(id)a3 performingAction:(id)a4 withInfo:(id)a5;

@end
