@class NSError, NSDate;

@interface HMMLogEvent : NSObject

@property (nonatomic, getter=isSubmitted) BOOL submitted;
@property (copy) NSDate *endDate;
@property (copy) NSError *error;
@property (readonly) double durationInMilliseconds;
@property (copy) NSDate *startDate;

+ (id)alloc;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (void)submitAtDate:(id)a0;

@end
