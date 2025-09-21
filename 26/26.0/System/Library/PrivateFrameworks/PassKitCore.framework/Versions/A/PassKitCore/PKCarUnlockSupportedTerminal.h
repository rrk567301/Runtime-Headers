@class NSArray, NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSString *manufacturerIdentifier;
@property (readonly, copy, nonatomic) NSSet *terminalCriteria;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)vehicleInitiatedPairingLaunchURLWithReferralSource:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
