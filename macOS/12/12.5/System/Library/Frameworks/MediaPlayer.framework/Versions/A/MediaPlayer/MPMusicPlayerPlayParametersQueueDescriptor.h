@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (copy, nonatomic) NSArray *playParametersQueue;
@property (retain, nonatomic) MPMusicPlayerPlayParameters *startItemPlayParameters;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlayParametersQueue:(id)a0;
- (void)setStartTime:(double)a0 forItemWithPlayParameters:(id)a1;
- (void)setEndTime:(double)a0 forItemWithPlayParameters:(id)a1;

@end
