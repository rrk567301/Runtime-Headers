@class NSString;

@interface MNTraceNetworkEvent : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;
@property (nonatomic) char cellEnabled;
@property (nonatomic) char wifiEnabled;
@property (nonatomic) char nlcEnabled;
@property (copy, nonatomic) NSString *nlcProfile;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
