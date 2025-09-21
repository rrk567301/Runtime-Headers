@class NSDictionary;

@interface DNDAppActionsBox : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSDictionary *appActionsForModeIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appConfigurationActionsForModeIdentifier;

@end
