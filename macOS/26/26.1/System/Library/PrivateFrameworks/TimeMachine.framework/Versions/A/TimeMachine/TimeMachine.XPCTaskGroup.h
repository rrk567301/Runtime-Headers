@interface TimeMachine.XPCTaskGroup : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ taskCounter;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ cancellationDates;
    void /* unknown type, empty encoding */ connectionID;
}

- (void).cxx_destruct;
- (id)init;

@end
