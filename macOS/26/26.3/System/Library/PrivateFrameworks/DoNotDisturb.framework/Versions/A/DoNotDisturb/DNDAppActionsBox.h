@class NSDictionary;

@interface DNDAppActionsBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *appActionsForModeIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)appConfigurationActionsForModeIdentifier;

@end
