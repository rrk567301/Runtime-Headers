@class NSString;

@interface TVRMSAudioRoute : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long macAddress;
@property (nonatomic) char supportsVideo;
@property (nonatomic, getter=isSelected) char selected;

+ (id)audioRoutesFromProtobufs:(id)a0;
+ (id)protobufsFromAudioRoutes:(id)a0;

- (void).cxx_destruct;
- (id)protobuf;
- (id)initWithProtobuf:(id)a0;
- (char)isEqualToAudioRoute:(id)a0;

@end
