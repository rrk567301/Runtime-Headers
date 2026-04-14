@class MPRadioStation;

@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, nonatomic) MPRadioStation *radioStation;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRadioStation:(id)a0;

@end
