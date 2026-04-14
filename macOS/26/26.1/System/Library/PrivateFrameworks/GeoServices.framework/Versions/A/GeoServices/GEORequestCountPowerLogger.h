@class NSMutableDictionary, NSDate, geo_isolater, NSObject;
@protocol OS_dispatch_source;

@interface GEORequestCountPowerLogger : NSObject {
    geo_isolater *_isolater;
    struct atomic_flag { _Atomic BOOL _Value; } _didRead;
    NSDate *_startDate;
    NSMutableDictionary *_clientInfo;
    BOOL _isDirty;
    NSObject<OS_dispatch_source> *_writeTimer;
    NSObject<OS_dispatch_source> *_flushTimer;
}

+ (id)sharedInstance;

- (void)_terminationRequested:(id)a0;
- (void)flushToPowerLog;
- (void)dealloc;
- (void).cxx_destruct;
- (void)incrementCountForClient:(id)a0 requestType:(int)a1;
- (id)init;

@end
