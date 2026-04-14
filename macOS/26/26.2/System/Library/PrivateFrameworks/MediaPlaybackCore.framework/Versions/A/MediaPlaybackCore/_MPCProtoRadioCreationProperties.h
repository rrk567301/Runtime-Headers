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

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
