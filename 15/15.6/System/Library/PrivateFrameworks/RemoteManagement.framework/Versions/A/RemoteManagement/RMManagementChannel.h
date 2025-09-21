@class NSString, NSURL;

@interface RMManagementChannel : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *accountDescription;
@property (readonly, copy, nonatomic) NSString *organizationDescription;
@property (readonly, copy, nonatomic) NSURL *enrollmentURL;
@property (readonly, copy, nonatomic) NSString *enrollmentToken;
@property (readonly, nonatomic) char isEnrolled;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToChannel:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 accountIdentifier:(id)a2 accountDescription:(id)a3 organizationDescription:(id)a4 enrollmentURL:(id)a5 enrollmentToken:(id)a6 isEnrolled:(char)a7;

@end
