@interface XCTTimeoutControls : NSObject <NSSecureCoding>

@property (class) double defaultMainThreadResponsivenessTimeout;
@property (class) double defaultQueryExecutionTimeout;
@property (class, readonly, copy) XCTTimeoutControls *standardTimeoutControls;
@property (class, readonly) BOOL supportsSecureCoding;

@property double mainThreadResponsivenessTimeout;
@property double queryExecutionTimeout;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
