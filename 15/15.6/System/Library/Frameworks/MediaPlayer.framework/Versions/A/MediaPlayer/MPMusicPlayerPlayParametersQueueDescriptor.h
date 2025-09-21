@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPMusicPlayerPlayParameters *_containerPlayParameters;
}

@property (copy, nonatomic) NSArray *playParametersQueue;
@property (retain, nonatomic) MPMusicPlayerPlayParameters *startItemPlayParameters;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)containerPlayParameters;
- (id)initWithPlayParametersQueue:(id)a0;
- (void)setContainerPlayParameters:(id)a0;
- (void)setEndTime:(double)a0 forItemWithPlayParameters:(id)a1;
- (void)setStartTime:(double)a0 forItemWithPlayParameters:(id)a1;

@end
