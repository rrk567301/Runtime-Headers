@class IDSIncomingBatchMessageContext;

@interface IDSBatchMessageProcessedContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSIncomingBatchMessageContext *batchMessageContext;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBatchMessageContext:(id)a0;

@end
