@class NSDate, NSString, CRKEventLog;

@interface CRKFetchLogEventsResultObject : CATTaskResultObject

@property (retain, nonatomic) CRKEventLog *eventLog;
@property (retain, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) NSString *sessionToken;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
