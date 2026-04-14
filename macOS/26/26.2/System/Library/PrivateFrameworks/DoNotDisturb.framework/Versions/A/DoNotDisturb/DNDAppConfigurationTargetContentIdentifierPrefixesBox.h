@class NSDictionary;

@interface DNDAppConfigurationTargetContentIdentifierPrefixesBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *appConfigurationTargetContentIdentifierPrefixesForModeIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
