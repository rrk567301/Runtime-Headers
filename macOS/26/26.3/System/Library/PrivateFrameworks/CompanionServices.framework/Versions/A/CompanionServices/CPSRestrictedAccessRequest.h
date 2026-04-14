@class NSArray, NSString;

@interface CPSRestrictedAccessRequest : CPSAuthenticationRequest <NSSecureCoding, BSXPCCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long restrictionType;
@property (retain, nonatomic) NSArray *approversAppleAccountAltDSIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)authType;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
