@interface ADMNotificationVendor : NSObject {
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ broadcasters;
    void /* unknown type, empty encoding */ nextAvailableListenerKey;
}

+ (id)canonical;

- (void).cxx_destruct;
- (id)init;
- (BOOL)deregisterListenerWithRegistrationResults:(id)a0;
- (id)registerBoolListenerWithNotificationKey:(id)a0 listenerCallback:(id /* block */)a1;

@end
