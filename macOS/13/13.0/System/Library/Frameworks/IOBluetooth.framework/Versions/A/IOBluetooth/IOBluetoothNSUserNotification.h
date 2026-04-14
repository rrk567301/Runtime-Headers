@interface IOBluetoothNSUserNotification : IOBluetoothUserNotification {
    id mObject;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0 object:(id)a1;
- (void)deliverNotification:(id)a0;

@end
