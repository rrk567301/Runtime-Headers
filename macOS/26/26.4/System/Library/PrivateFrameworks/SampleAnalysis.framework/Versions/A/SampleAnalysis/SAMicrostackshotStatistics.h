@class SAMSTypeStats;

@interface SAMicrostackshotStatistics : NSObject

@property (readonly) SAMSTypeStats *total;
@property (readonly) SAMSTypeStats *interrupt;
@property (readonly) SAMSTypeStats *timer;
@property (readonly) SAMSTypeStats *io;
@property (readonly) SAMSTypeStats *pmi;
@property (readonly) SAMSTypeStats *macf;
@property (readonly) SAMSTypeStats *vm_fault;
@property (readonly) SAMSTypeStats *page_grab;
@property (readonly) SAMSTypeStats *unknown_type;
@property unsigned long long bytes_not_microstackshots;
@property unsigned long long bytes_other_data;
@property unsigned long long num_microstackshots_filtered_out;
@property unsigned long long bytes_microstackshots_filtered_out;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;

@end
