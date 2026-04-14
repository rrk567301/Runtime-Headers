@class NSDate;

@interface HMMDatedLogEvent : HMMLogEvent {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;

- (void).cxx_destruct;
- (id)init;
- (void)markEndTime;

@end
