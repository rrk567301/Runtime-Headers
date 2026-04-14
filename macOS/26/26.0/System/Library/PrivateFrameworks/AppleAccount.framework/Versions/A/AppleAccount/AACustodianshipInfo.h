@class NSUUID, NSString;

@interface AACustodianshipInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *custodianID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *ownerHandle;

- (id)statusDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 status:(long long)a1 ownerHandle:(id)a2;

@end
