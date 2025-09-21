@class NSString, BMWalletPaymentsCommerceTransactionMerchant, NSDate, BMWalletPaymentsCommerceTransactionAccount;

@interface BMWalletPaymentsCommerceTransaction : BMEventBase <BMStoreData> {
    BOOL _hasRaw_transactionDate;
    double _raw_transactionDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *amount;
@property (readonly, nonatomic) NSDate *transactionDate;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSString *transactionDescription;
@property (readonly, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTransactionAccount *account;
@property (readonly, nonatomic) BMWalletPaymentsCommerceTransactionMerchant *merchant;
@property (readonly, nonatomic) int transactionSource;
@property (readonly, nonatomic) int accountType;
@property (readonly, nonatomic) int transactionStatus;
@property (readonly, nonatomic) int transactionType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAmount:(id)a0 transactionDate:(id)a1 transactionID:(id)a2 currencyCode:(id)a3 transactionDescription:(id)a4 timeZone:(id)a5 account:(id)a6 merchant:(id)a7 transactionSource:(int)a8 accountType:(int)a9 transactionStatus:(int)a10 transactionType:(int)a11;

@end
