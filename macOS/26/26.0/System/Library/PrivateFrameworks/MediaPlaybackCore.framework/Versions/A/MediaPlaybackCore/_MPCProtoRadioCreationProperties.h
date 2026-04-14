@class _MPCProtoRadioContentReference, NSString, _MPCProtoDelegateInfo;

@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying> {
    _MPCProtoDelegateInfo *_accountInfo;
    _MPCProtoRadioContentReference *_nowPlayingContentReference;
    NSString *_playActivityFeatureName;
    NSString *_playActivityQueueGroupingID;
    NSString *_radioStationID;
    NSString *_radioStationURLString;
    _MPCProtoRadioContentReference *_seedContentReference;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
