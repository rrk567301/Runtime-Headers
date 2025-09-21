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
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
