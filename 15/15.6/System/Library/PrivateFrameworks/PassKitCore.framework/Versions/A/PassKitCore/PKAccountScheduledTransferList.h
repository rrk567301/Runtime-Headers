@class NSArray, NSMutableArray;

@interface PKAccountScheduledTransferList : NSObject <NSSecureCoding> {
    NSMutableArray *_scheduledTransfers;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *scheduledTransfers;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addScheduledTransfer:(id)a0;
- (id)initWithScheduledTransfer:(id)a0;
- (id)jsonArrayRepresentation;
- (id)scheduledTransferOfFundingSourceType:(long long)a0;

@end
