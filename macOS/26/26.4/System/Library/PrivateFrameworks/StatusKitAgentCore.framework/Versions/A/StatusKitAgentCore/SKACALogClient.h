@interface SKACALogClient : NSObject {
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ serviceIdentifier;
}

+ (id)presenceClientWithIdentifier:(id)a0 serviceIdentifier:(id)a1;
+ (id)statusClientWithIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
