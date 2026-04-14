@class NSNumber, NSString, IDSServerStorageFetchContext;

@interface IDSIncomingBatchMessageContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isLastFromStorage;
@property (retain, nonatomic) NSNumber *batchNumber;
@property (retain, nonatomic) NSNumber *totalBatchCount;
@property (nonatomic) BOOL firstMessageAfterTimeout;
@property (readonly, nonatomic) NSString *batchIdentifier;
@property (readonly, nonatomic) IDSServerStorageFetchContext *serverStorageFetchContext;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBatchIdentifier:(id)a0 serverStorageFetchContext:(id)a1;

@end
