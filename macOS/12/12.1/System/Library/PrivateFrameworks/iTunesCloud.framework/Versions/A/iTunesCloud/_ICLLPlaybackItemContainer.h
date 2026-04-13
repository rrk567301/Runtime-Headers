@class NSString;

@interface _ICLLPlaybackItemContainer : PBCodable <NSCopying> {
    NSString *_containerId;
    NSString *_featureName;
    NSString *_mediaId;
    int _type;
    struct { unsigned char type : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
