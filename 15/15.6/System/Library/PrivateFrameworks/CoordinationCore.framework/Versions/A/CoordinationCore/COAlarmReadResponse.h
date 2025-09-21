@class NSArray;

@interface COAlarmReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *alarms;
@property (readonly, nonatomic, getter=isFiltered) char filtered;
@property (readonly, copy, nonatomic) NSArray *deletes;
@property (readonly, nonatomic) char skipInMerge;
@property (readonly, nonatomic) char notModified;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarms:(id)a0;
- (id)initNotModifiedWithDeletes:(id)a0;
- (id)initWithAlarms:(id)a0 deletes:(id)a1;
- (id)initWithFilteredAlarms:(id)a0;
- (id)initWithSkipInMerge;

@end
