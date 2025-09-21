@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) NSString *UID;
@property (readonly) char hasHardwareVoiceCallProcessing;
@property (readonly, getter=isSpatialAudioEnabled) char spatialAudioEnabled;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *preferredDataSource;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 UID:(id)a1 Name:(id)a2 Channels:(id)a3;
- (char)isEqualToPort:(id)a0 compareStrict:(char)a1;
- (char)setPreferredDataSource:(id)a0 error:(id *)a1;

@end
