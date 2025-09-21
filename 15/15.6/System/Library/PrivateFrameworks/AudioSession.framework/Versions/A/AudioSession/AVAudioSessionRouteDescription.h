@class NSString, NSArray;

@interface AVAudioSessionRouteDescription : NSObject {
    void *_impl;
}

@property (readonly) NSString *siriRemoteInputIdentifier;
@property (readonly) unsigned long long siriInputSource;
@property (readonly) char supportsSoftwareVolume;
@property (readonly) char supportsDoAP;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToRoute:(id)a0;
- (id)initWithInputs:(id)a0 outputs:(id)a1;

@end
