@class NSString, NSMutableDictionary, NSDate;

@interface HMDAccessoryPairingProgressStateMap : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessoryPairingProgressStateMapLock;
}

@property (retain, nonatomic) NSMutableDictionary *progressStateMap;
@property (retain, nonatomic) NSString *lastProgressState;
@property (retain, nonatomic) NSString *longestProgressState;
@property (retain, nonatomic) NSDate *lastProgressStateEventTime;

- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (double)getTimeDurationForLongestProgressState;
- (void)updateWithProgressState:(id)a0 date:(id)a1;

@end
