@class NSString, NSDate;

@interface SNWiFiRecordInternal : NSObject {
    void /* function */ channelInfo;
    void /* function */ phyMode;
    void /* unknown type, empty encoding */ timestamp;
}

@property (nonatomic, readonly) long long rssi;
@property (nonatomic, readonly) long long snr;
@property (nonatomic, readonly) long long cca;
@property (nonatomic, readonly) NSString *channelInfo;
@property (nonatomic, readonly) NSString *phyMode;
@property (nonatomic, readonly) BOOL isCaptive;
@property (nonatomic, readonly) NSDate *timestamp;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRssi:(long long)a0 snr:(long long)a1 cca:(long long)a2 channelInfo:(id)a3 phyMode:(id)a4 isCaptive:(BOOL)a5 timestamp:(id)a6;

@end
