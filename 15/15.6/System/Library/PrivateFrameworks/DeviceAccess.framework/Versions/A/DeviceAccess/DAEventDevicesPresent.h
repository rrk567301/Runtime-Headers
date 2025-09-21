@class NSArray;

@interface DAEventDevicesPresent : DAEvent

@property (copy, nonatomic) NSArray *devices;
@property (readonly, nonatomic) char devicesPresent;
@property (readonly, nonatomic) char devicesMigrated;

- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithMigration:(char)a0;
- (id)initWithPresent:(char)a0;
- (id)initWithPresent:(char)a0 devicesMigrated:(char)a1;

@end
