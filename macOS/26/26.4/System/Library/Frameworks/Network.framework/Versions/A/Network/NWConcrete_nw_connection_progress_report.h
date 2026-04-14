@class NSString;

@interface NWConcrete_nw_connection_progress_report : NSObject <OS_nw_connection_progress_report> {
    int phase;
    unsigned int rtt_estimate;
    unsigned int completion_estimate;
    unsigned int elapsed_time_ms;
    unsigned int last_attempt_started_ms;
    unsigned short attempt_count;
    int stall_reason;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end
