@class NSArray;

@interface DMFFetchStreamEventsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *eventStatuses;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
