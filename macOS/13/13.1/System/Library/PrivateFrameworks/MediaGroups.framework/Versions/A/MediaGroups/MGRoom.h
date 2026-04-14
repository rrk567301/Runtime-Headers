@interface MGRoom : MGGroup

+ (id)type;
+ (id)predicateForCurrentDevice;
+ (id)predicateForType;

- (id)initWithClientService:(id)a0 room:(id)a1 home:(id)a2;
- (id)HomeKitRoomIdentifier;
- (id)HomeKitRoomWithHomeManager:(id)a0;

@end
