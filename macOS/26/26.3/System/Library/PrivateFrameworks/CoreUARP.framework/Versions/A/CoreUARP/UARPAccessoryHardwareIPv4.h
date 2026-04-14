@class NSString;

@interface UARPAccessoryHardwareIPv4 : UARPAccessoryHardwareID

@property (readonly) NSString *appleModelNumber;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAppleModelNumber:(id)a0;

@end
