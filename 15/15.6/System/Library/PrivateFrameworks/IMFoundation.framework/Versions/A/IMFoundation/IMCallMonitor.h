@class CXCallObserver, NSDate;

@interface IMCallMonitor : NSObject {
    CXCallObserver *_callCenter;
    char _wasOnCall;
}

@property (readonly, nonatomic) char isOnCall;
@property (readonly, nonatomic) char isOnTelephonyCall;
@property (readonly, retain, nonatomic) NSDate *dateLastCallEnded;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
