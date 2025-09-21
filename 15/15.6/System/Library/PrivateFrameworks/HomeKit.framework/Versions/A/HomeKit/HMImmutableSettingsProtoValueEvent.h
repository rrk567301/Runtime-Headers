@class HMImmutableSettingsProtoIntegerValueEvent, HMImmutableSettingsProtoStringValueEvent, HMImmutableSettingsProtoBoolValueEvent, HMImmutableSettingsProtoLanguageValueEvent;

@interface HMImmutableSettingsProtoValueEvent : PBCodable <NSCopying> {
    struct { unsigned char settingValueEvent : 1; } _has;
}

@property (readonly, nonatomic) char hasStringValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoStringValueEvent *stringValueEvent;
@property (readonly, nonatomic) char hasIntegerValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *integerValueEvent;
@property (readonly, nonatomic) char hasBoolValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoBoolValueEvent *boolValueEvent;
@property (readonly, nonatomic) char hasLanguageValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoLanguageValueEvent *languageValueEvent;
@property (nonatomic) char hasSettingValueEvent;
@property (nonatomic) int settingValueEvent;

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
- (int)StringAsSettingValueEvent:(id)a0;
- (void)clearOneofValuesForSettingValueEvent;
- (id)settingValueEventAsString:(int)a0;

@end
