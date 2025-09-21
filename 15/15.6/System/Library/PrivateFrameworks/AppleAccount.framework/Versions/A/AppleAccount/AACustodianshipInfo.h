@class NSUUID, NSString;

@interface AACustodianshipInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *custodianID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *ownerHandle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 status:(long long)a1 ownerHandle:(id)a2;
- (id)statusDescription;

@end
