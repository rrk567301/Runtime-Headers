@class NSString;

@interface _ICLLPlaybackItemContainer : PBCodable <NSCopying> {
    NSString *_containerId;
    NSString *_featureName;
    NSString *_mediaId;
    NSString *_stationHash;
    int _type;
    struct { unsigned char type : 1; } _has;
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
