@class MPRadioStation;

@interface MPMusicPlayerRadioStationQueueDescriptor : MPMusicPlayerQueueDescriptor

@property (readonly, nonatomic) MPRadioStation *radioStation;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRadioStation:(id)a0;

@end
