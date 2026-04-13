@class NSString;

@interface CalAgentLinkQueueDebugOperationItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *readableDescription;
@property (nonatomic) long long retryCounter;
@property (nonatomic) long long maxRetries;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isPendingRetry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
