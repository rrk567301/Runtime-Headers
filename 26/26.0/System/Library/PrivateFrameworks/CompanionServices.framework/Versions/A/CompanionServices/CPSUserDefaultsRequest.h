@class NSString, NSArray;

@interface CPSUserDefaultsRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appleAccountAltDSID;
@property (retain, nonatomic) NSArray *readInfo;
@property (retain, nonatomic) NSArray *writeInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void).cxx_destruct;

@end
