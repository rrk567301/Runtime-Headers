@class NSString, NSUUID;

@interface CXSendMMIOrUSSDCodeAction : CXAction

@property (copy, nonatomic) NSString *code;
@property (nonatomic) long long ttyType;
@property (retain, nonatomic) NSUUID *senderIdentityUUID;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
