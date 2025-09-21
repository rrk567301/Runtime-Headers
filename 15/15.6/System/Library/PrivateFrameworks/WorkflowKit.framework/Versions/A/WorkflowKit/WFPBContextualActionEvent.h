@class NSString;

@interface WFPBContextualActionEvent : PBCodable <NSCopying> {
    struct { unsigned char itemCount : 1; unsigned char hasTrackpad : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) char hasHasTrackpad;
@property (nonatomic) char hasTrackpad;
@property (nonatomic) char hasItemCount;
@property (nonatomic) unsigned int itemCount;

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
