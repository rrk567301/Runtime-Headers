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

- (id)initWithRawDescription:(id)a0 owningSession:(id)a1;
- (id)initWithInputs:(id)a0 outputs:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToRoute:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)updateOutputPortsWithSpatialAudioStatus:(BOOL)a0;
- (struct RouteDescriptionImpl { id x0; id x1; id x2; unsigned long long x3; BOOL x4; BOOL x5; } *)privateGetImplementation;
- (void)dealloc;

@end
