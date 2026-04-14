@interface MGHome : MGGroup

+ (id)type;
+ (id)predicateForCurrentDevice;
+ (id)predicateForType;

- (id)initWithClientService:(id)a0 home:(id)a1;
- (id)HomeKitHomeIdentifier;
- (id)HomeKitHomeWithHomeManager:(id)a0;

@end
