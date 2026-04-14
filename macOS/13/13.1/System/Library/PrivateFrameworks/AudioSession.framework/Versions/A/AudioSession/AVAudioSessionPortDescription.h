@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) NSString *UID;
@property (readonly) BOOL hasHardwareVoiceCallProcessing;
@property (readonly, getter=isSpatialAudioEnabled) BOOL spatialAudioEnabled;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *preferredDataSource;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)setPreferredDataSource:(id)a0 error:(id *)a1;
- (BOOL)isEqualToPort:(id)a0 compareStrict:(BOOL)a1;
- (id)initWithType:(id)a0 UID:(id)a1 Name:(id)a2 Channels:(id)a3;

@end
