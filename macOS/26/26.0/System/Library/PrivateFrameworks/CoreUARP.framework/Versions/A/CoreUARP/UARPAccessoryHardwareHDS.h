@class NSUUID;

@interface UARPAccessoryHardwareHDS : UARPAccessoryHardwareID

@property (readonly) NSUUID *uuid;

- (id)initWithUUID:(id)a0;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
