@class MPRadioStation;

@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, nonatomic) MPRadioStation *radioStation;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithRadioStation:(id)a0;

@end
