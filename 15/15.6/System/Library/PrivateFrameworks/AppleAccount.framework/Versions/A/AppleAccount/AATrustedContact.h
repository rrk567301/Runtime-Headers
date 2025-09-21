@class NSUUID, NSString;

@interface AATrustedContact : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *custodianID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char isAcceptedAndShared;
@property (readonly, nonatomic) char isIdMSConfirmed;
@property (readonly, nonatomic) long long preflightStatus;
@property (readonly, nonatomic) NSUUID *otCustodianID;
@property (readonly, nonatomic) NSString *keyCreatedOnBuild;
@property (readonly, nonatomic) NSString *repairDate;
@property (readonly, nonatomic) unsigned long long repairCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 status:(long long)a1 handle:(id)a2 firstName:(id)a3 lastName:(id)a4 displayName:(id)a5 isAcceptedAndShared:(char)a6 isIdMSConfirmed:(char)a7 preflightStatus:(long long)a8 otCustodianID:(id)a9 keyCreatedOnBuild:(id)a10 repairDate:(id)a11 repairCount:(unsigned long long)a12;

@end
