@interface IRDaemonStore : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersistenceManager:(id)a0;

@end
