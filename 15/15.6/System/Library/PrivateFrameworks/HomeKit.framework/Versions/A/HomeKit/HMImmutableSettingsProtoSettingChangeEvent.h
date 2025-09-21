@class NSString, HMImmutableSettingsProtoBoolSettingEvent, HMImmutableSettingsProtoStringSettingEvent, HMImmutableSettingsProtoLanguageSettingEvent, HMImmutableSettingsProtoAvailableLanguageListEvent, HMImmutableSettingsProtoBoundedIntegerSettingEvent;

@interface HMImmutableSettingsProtoSettingChangeEvent : PBCodable <NSCopying> {
    struct { unsigned char settingChangeEvent : 1; unsigned char readOnly : 1; } _has;
}

@property (readonly, nonatomic) char hasKeyPath;
@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) char hasReadOnly;
@property (nonatomic) char readOnly;
@property (readonly, nonatomic) char hasStringSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoStringSettingEvent *stringSetting;
@property (readonly, nonatomic) char hasBoundedIntegerSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoBoundedIntegerSettingEvent *boundedIntegerSetting;
@property (readonly, nonatomic) char hasBoolSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoBoolSettingEvent *boolSetting;
@property (readonly, nonatomic) char hasLanguageSetting;
@property (retain, nonatomic) HMImmutableSettingsProtoLanguageSettingEvent *languageSetting;
@property (readonly, nonatomic) char hasAvailableLanguages;
@property (retain, nonatomic) HMImmutableSettingsProtoAvailableLanguageListEvent *availableLanguages;
@property (nonatomic) char hasSettingChangeEvent;
@property (nonatomic) int settingChangeEvent;

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
- (int)StringAsSettingChangeEvent:(id)a0;
- (void)clearOneofValuesForSettingChangeEvent;
- (id)settingChangeEventAsString:(int)a0;

@end
