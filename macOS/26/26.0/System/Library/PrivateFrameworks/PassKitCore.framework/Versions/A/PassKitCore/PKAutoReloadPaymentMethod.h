@class NSString, NSURL;

@interface PKAutoReloadPaymentMethod : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSString *fpanIdentifier;
@property (retain, nonatomic) NSString *merchantTokenIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSURL *managementURL;
@property (nonatomic) unsigned long long type;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
