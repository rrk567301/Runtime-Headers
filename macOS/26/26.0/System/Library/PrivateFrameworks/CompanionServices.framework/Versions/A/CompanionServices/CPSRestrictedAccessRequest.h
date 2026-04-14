@class NSArray, NSString;

@interface CPSRestrictedAccessRequest : CPSAuthenticationRequest <NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long restrictionType;
@property (retain, nonatomic) NSArray *approversAppleAccountAltDSIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void).cxx_destruct;

@end
