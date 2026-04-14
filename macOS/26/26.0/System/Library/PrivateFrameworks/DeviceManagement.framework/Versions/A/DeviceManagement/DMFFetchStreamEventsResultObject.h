@class NSArray;

@interface DMFFetchStreamEventsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *eventStatuses;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
