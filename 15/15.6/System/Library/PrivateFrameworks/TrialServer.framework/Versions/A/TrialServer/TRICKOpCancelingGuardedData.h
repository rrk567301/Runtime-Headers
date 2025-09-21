@class NSMutableArray;

@interface TRICKOpCancelingGuardedData : NSObject {
    NSMutableArray *opsInFlight;
    char cancelReceived;
}

- (void).cxx_destruct;

@end
