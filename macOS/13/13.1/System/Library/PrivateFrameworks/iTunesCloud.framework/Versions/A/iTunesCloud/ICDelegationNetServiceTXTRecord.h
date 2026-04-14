@class NSArray, NSString, NSData;

@interface ICDelegationNetServiceTXTRecord : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *delegationAccountUUIDs;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long serviceVersion;
@property (readonly, copy, nonatomic) NSData *TXTRecordData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithTXTRecordData:(id)a0;

@end
