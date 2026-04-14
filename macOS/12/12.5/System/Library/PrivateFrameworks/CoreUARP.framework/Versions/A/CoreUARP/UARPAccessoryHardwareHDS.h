@class NSUUID;

@interface UARPAccessoryHardwareHDS : UARPAccessoryHardwareID

@property (readonly) NSUUID *uuid;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;

@end
