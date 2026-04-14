@interface VNDetectScreenGazeRequestConfiguration : VNStatefulRequestConfiguration {
    long long _temporalSmoothingFrameCount;
}

@property (nonatomic) long long temporalSmoothingFrameCount;
@property (nonatomic) unsigned long long screenSize;

- (id)initWithRequestClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
