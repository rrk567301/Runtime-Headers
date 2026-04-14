@class NSString;

@interface UARPAccessoryHardwareIPv4 : UARPAccessoryHardwareID

@property (readonly) NSString *appleModelNumber;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppleModelNumber:(id)a0;

@end
