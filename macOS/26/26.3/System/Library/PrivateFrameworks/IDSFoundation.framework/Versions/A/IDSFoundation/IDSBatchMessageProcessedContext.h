@class IDSIncomingBatchMessageContext;

@interface IDSBatchMessageProcessedContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSIncomingBatchMessageContext *batchMessageContext;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBatchMessageContext:(id)a0;

@end
