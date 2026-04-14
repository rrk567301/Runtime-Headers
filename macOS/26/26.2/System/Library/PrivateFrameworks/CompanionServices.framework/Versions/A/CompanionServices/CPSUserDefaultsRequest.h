@class NSString, NSArray;

@interface CPSUserDefaultsRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appleAccountAltDSID;
@property (retain, nonatomic) NSArray *readInfo;
@property (retain, nonatomic) NSArray *writeInfo;

- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
