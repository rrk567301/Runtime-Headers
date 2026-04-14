@class NSArray;

@interface COTimerReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *timers;
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, copy, nonatomic) NSArray *deletes;
@property (readonly, nonatomic) BOOL skipInMerge;
@property (readonly, nonatomic) BOOL notModified;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimers:(id)a0;
- (id)initNotModifiedWithDeletes:(id)a0;
- (id)initWithFilteredTimers:(id)a0;
- (id)initWithSkipInMerge;
- (id)initWithTimers:(id)a0 deletes:(id)a1;

@end
