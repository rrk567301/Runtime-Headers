@class NSHTTPURLResponse, NSString, NSDate, NSURLRequest;

@interface NWURLSessionResumeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURLRequest *originalRequest;
@property (retain, nonatomic) NSURLRequest *currentRequest;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSDate *earliestBeginDate;
@property (nonatomic) long long countOfBytesClientExpectsToSend;
@property (nonatomic) long long countOfBytesClientExpectsToReceive;
@property (retain, nonatomic) NSString *taskDescription;
@property (nonatomic) float priority;
@property (nonatomic) BOOL prefersIncrementalDelivery;
@property (nonatomic) unsigned int taskIdentifier;
@property (nonatomic) double startTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
