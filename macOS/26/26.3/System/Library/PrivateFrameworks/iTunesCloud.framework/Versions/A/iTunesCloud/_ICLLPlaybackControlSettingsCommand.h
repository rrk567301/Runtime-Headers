@class _ICLLPlaybackControlSettings;

@interface _ICLLPlaybackControlSettingsCommand : PBCodable <NSCopying> {
    _ICLLPlaybackControlSettings *_settings;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
