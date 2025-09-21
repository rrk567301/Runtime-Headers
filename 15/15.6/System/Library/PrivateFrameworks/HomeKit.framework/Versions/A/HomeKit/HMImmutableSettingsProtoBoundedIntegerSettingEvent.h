@class HMImmutableSettingsProtoIntegerValueEvent;

@interface HMImmutableSettingsProtoBoundedIntegerSettingEvent : PBCodable <NSCopying> {
    struct { unsigned char maxValue : 1; unsigned char minValue : 1; unsigned char stepValue : 1; } _has;
}

@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *value;
@property (nonatomic) char hasMinValue;
@property (nonatomic) long long minValue;
@property (nonatomic) char hasMaxValue;
@property (nonatomic) long long maxValue;
@property (nonatomic) char hasStepValue;
@property (nonatomic) long long stepValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
