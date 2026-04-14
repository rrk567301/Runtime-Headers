@class NSArray, NSString, NSData;

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *delegationAccountUUIDs;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long serviceVersion;
@property (readonly, copy, nonatomic) NSData *TXTRecordData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTXTRecordData:(id)a0;

@end
