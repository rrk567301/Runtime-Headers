@class NSData, NSString, PKAccountStatementMetadata;

@interface PKAccountExportedTransactionInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *transactionData;
@property (copy, nonatomic) NSString *transactionDataFilename;
@property (copy, nonatomic) NSString *transactionDataHash;
@property (retain, nonatomic) PKAccountStatementMetadata *statementMetadata;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
