@interface IOCEventIOResumeRequest : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int reason;

- (id)initWithReason:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
