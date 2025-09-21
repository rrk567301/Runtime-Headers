@protocol EFCancelable;

@interface EMNSUserDefaultsBoolObserver : NSObject {
    id<EFCancelable> _observationToken;
    char _enabled;
}

@property (readonly, getter=isEnabled) char enabled;

- (void).cxx_destruct;
- (id)initWithUserDefaultKey:(id)a0 keyRepresentsDisabled:(char)a1 handler:(id /* block */)a2;
- (id)initWithUserDefaults:(id)a0 keyPath:(id)a1 keyRepresentsDisabled:(char)a2 handler:(id /* block */)a3;

@end
