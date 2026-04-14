@class NSString;

@interface PKAccountTransactionSyncReportItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *transactionServiceIdentifier;
@property (readonly, copy, nonatomic) NSString *recordName;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSString *altDSID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTransactionServiceIdentifier:(id)a0 recordName:(id)a1 recordType:(id)a2 zoneName:(id)a3 altDSID:(id)a4;

@end
