@class IDSIncomingBatchMessageContext;

@interface IDSBatchMessageProcessedContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSIncomingBatchMessageContext *batchMessageContext;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBatchMessageContext:(id)a0;

@end
