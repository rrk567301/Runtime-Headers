@class NSString;

@interface _ICLLPlaybackSyncAction : PBCodable <NSCopying> {
    NSString *_participantState;
    int _payload;
    NSString *_transportControlState;
    struct { unsigned char payload : 1; } _has;
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
