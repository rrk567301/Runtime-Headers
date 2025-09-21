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

- (BOOL)isEqualToRoute:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithInputs:(id)a0 outputs:(id)a1;
- (id)description;
- (void)updateOutputPortsWithSpatialAudioStatus:(BOOL)a0;
- (struct RouteDescriptionImpl { id x0; id x1; id x2; unsigned long long x3; BOOL x4; BOOL x5; } *)privateGetImplementation;
- (id)initWithRawDescription:(id)a0 owningSession:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
