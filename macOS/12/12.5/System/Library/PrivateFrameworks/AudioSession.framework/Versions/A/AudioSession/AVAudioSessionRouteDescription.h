@class NSString, NSArray;

@interface AVAudioSessionRouteDescription : NSObject {
    void *_impl;
}

@property (readonly) NSString *siriRemoteInputIdentifier;
@property (readonly) unsigned long long siriInputSource;
@property (readonly) BOOL supportsSoftwareVolume;
@property (readonly) BOOL supportsDoAP;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInputs:(id)a0 outputs:(id)a1;
- (BOOL)isEqualToRoute:(id)a0;

@end
