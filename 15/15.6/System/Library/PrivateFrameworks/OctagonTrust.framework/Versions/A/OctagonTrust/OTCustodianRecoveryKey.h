@class NSUUID, NSData, NSString;

@interface OTCustodianRecoveryKey : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *wrappingKey;
@property (readonly, nonatomic) NSData *wrappedKey;
@property (readonly, nonatomic) NSString *recoveryString;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)generateWrappingWithError:(id *)a0;
- (id)initWithUUID:(id)a0 recoveryString:(id)a1 error:(id *)a2;
- (id)initWithWrappedKey:(id)a0 wrappingKey:(id)a1 uuid:(id)a2 error:(id *)a3;
- (char)isEqualToCustodianRecoveryKey:(id)a0;
- (char)unwrapWithError:(id *)a0;

@end
