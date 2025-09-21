@class NSDictionary;

@interface DNDAppActionsBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *appActionsForModeIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)appConfigurationActionsForModeIdentifier;

@end
