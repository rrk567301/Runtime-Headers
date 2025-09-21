@class HMImmutableSettingsProtoIntegerValueEvent, HMImmutableSettingsProtoStringValueEvent, HMImmutableSettingsProtoBoolValueEvent, HMImmutableSettingsProtoLanguageValueEvent;

@interface HMImmutableSettingsProtoValueEvent : PBCodable <NSCopying> {
    struct { unsigned char settingValueEvent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStringValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoStringValueEvent *stringValueEvent;
@property (readonly, nonatomic) BOOL hasIntegerValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *integerValueEvent;
@property (readonly, nonatomic) BOOL hasBoolValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoBoolValueEvent *boolValueEvent;
@property (readonly, nonatomic) BOOL hasLanguageValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoLanguageValueEvent *languageValueEvent;
@property (nonatomic) BOOL hasSettingValueEvent;
@property (nonatomic) int settingValueEvent;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsSettingValueEvent:(id)a0;
- (void)clearOneofValuesForSettingValueEvent;
- (id)settingValueEventAsString:(int)a0;

@end
