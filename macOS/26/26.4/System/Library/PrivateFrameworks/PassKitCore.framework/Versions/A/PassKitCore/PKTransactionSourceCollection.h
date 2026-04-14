@class NSSet;

@interface PKTransactionSourceCollection : NSObject

@property (readonly, copy, nonatomic) NSSet *transactionSources;

- (id)account;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTransactionSource:(id)a0;
- (id)initWithTransactionSources:(id)a0;
- (id)paymentPass;
- (id)transactionSourceForTransactionSourceIdentifier:(id)a0;
- (id)transactionSourceIdentifiers;
- (id)transactionSourcesForType:(unsigned long long)a0;

@end
