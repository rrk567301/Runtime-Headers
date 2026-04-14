@class NSArray;

@interface DMFFetchStreamEventsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *eventStatuses;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
