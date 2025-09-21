@class NSArray, NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSString *manufacturerIdentifier;
@property (readonly, copy, nonatomic) NSSet *terminalCriteria;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)vehicleInitiatedPairingLaunchURLWithReferralSource:(unsigned long long)a0;

@end
