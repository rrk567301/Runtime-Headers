@class IDSKTRegistrationData;

@interface IDSKTRegistrationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IDSKTRegistrationData *unregisteredKTData;
@property (retain, nonatomic) IDSKTRegistrationData *registeredKTData;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
