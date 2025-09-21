@class NSArray;

@interface COAlarmReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *alarms;
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, copy, nonatomic) NSArray *deletes;
@property (readonly, nonatomic) BOOL skipInMerge;
@property (readonly, nonatomic) BOOL notModified;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlarms:(id)a0;
- (id)initNotModifiedWithDeletes:(id)a0;
- (id)initWithAlarms:(id)a0 deletes:(id)a1;
- (id)initWithFilteredAlarms:(id)a0;
- (id)initWithSkipInMerge;

@end
