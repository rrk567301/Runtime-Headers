@interface SKACALogToken : NSObject {
    void /* unknown type, empty encoding */ event;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ startTime;
}

- (void).cxx_destruct;
- (id)init;
- (void)logFailureWithError:(id)a0;
- (void)logSuccess;

@end
