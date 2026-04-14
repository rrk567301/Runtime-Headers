@class NSUUID;

@interface UARPAccessoryHardwareHDS : UARPAccessoryHardwareID

@property (readonly) NSUUID *uuid;

- (id)initWithUUID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
