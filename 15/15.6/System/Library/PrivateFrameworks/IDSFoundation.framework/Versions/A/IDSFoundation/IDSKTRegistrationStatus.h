@class IDSKTRegistrationData;

@interface IDSKTRegistrationStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) IDSKTRegistrationData *unregisteredKTData;
@property (retain, nonatomic) IDSKTRegistrationData *registeredKTData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
