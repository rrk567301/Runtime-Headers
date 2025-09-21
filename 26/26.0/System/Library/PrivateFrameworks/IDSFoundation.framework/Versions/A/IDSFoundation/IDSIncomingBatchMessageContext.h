@class NSNumber, NSString, IDSServerStorageFetchContext;

@interface IDSIncomingBatchMessageContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isLastFromStorage;
@property (retain, nonatomic) NSNumber *batchNumber;
@property (retain, nonatomic) NSNumber *totalBatchCount;
@property (readonly, nonatomic) NSString *batchIdentifier;
@property (readonly, nonatomic) IDSServerStorageFetchContext *serverStorageFetchContext;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBatchIdentifier:(id)a0 serverStorageFetchContext:(id)a1;

@end
