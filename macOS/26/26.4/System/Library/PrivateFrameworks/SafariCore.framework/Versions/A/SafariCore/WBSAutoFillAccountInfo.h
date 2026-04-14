@class NSString;

@interface WBSAutoFillAccountInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *savedAccountID;
@property (readonly, nonatomic) NSString *userNameForTesting;
@property (readonly, nonatomic) NSString *passwordForTesting;
@property (readonly, nonatomic) BOOL canAutoFill;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForTestingWithUserName:(id)a0 password:(id)a1;
- (id)initWithSavedAccountID:(id)a0;

@end
