@class NSData, NSArray;

@interface DYGPUTimelineInfo : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _version;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int numPeriodicSamples;
@property (retain, nonatomic) NSData *timestamps;
@property (retain, nonatomic) NSData *derivedCounters;
@property (retain, nonatomic) NSArray *derivedCounterNames;
@property (retain, nonatomic) NSData *activeShadersPerPeriodicSample;
@property (retain, nonatomic) NSData *activeCoreInfoMasksPerPeriodicSample;
@property (retain, nonatomic) NSData *numActiveShadersPerPeriodicSample;
@property (retain, nonatomic) NSData *encoderTimelineInfos;
@property (retain, nonatomic) NSData *metalFXTimelineInfo;

- (id)initWithCoder:(id)a0;
- (void)setVersion:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateActiveShadersForAllSamples:(id /* block */)a0;
- (void)enumerateActiveShadersForSampleAtIndex:(unsigned int)a0 withBlock:(id /* block */)a1;

@end
