@class NSSet;

@interface PKTransactionSourceCollection : NSObject

@property (readonly, copy, nonatomic) NSSet *transactionSources;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)account;
- (id)paymentPass;
- (id)transactionSourceIdentifiers;
- (id)initWithTransactionSources:(id)a0;
- (id)initWithTransactionSource:(id)a0;
- (id)transactionSourceForTransactionSourceIdentifier:(id)a0;
- (id)transactionSourcesForType:(unsigned long long)a0;

@end
