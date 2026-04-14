@interface ADMNotificationVendor : NSObject {
    void /* unknown type, empty encoding */ builder;
    void /* unknown type, empty encoding */ broadcasters;
    void /* unknown type, empty encoding */ nextAvailableListenerKey;
}

+ (id)canonical;

- (id)init;
- (void).cxx_destruct;
- (BOOL)deregisterListenerWithRegistrationResults:(id)a0;
- (id)registerBoolListenerWithNotificationKey:(id)a0 listenerCallback:(id /* block */)a1;

@end
