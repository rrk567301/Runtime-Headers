@interface WALQM : NSObject

@property unsigned long long channel;
@property short band;
@property long long rssi;
@property long long noise;
@property long long snr;
@property unsigned long long ccaTotal;
@property unsigned long long ccaSelf;
@property unsigned long long ccaOther;
@property unsigned long long ccaInterference;
@property unsigned long long beaconPER;
@property unsigned long long rxFrames;
@property unsigned long long rxRetryFrames;
@property unsigned long long txFrames;
@property unsigned long long txReTrans;
@property unsigned long long txFail;
@property unsigned long long txRate;
@property unsigned long long rxRate;
@property unsigned long long duration;
@property BOOL isAnyAppInFg;
@property BOOL isFTactive;
@property BOOL isTimeSensitiveAppRunning;

+ (id)waLQMonChannel:(unsigned long long)a0 band:(short)a1 rssi:(long long)a2 noise:(long long)a3 snr:(long long)a4 totalCCA:(unsigned long long)a5 selfCca:(unsigned long long)a6 otherCca:(unsigned long long)a7 interference:(unsigned long long)a8 beaconPer:(unsigned long long)a9 rxFrames:(unsigned long long)a10 rxRetryFrames:(unsigned long long)a11 txFrames:(unsigned long long)a12 txRetries:(unsigned long long)a13 txFail:(unsigned long long)a14 txRate:(unsigned long long)a15 rxRate:(unsigned long long)a16 isAnyAppInFG:(BOOL)a17 isFTactive:(BOOL)a18 isTimeSensitiveAppRunning:(BOOL)a19 duration:(unsigned long long)a20;

- (id)description;

@end
