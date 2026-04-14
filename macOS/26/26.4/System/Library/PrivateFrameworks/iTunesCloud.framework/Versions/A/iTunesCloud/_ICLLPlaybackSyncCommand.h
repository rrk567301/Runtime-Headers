@class NSString;

@interface _ICLLPlaybackSyncCommand : PBCodable <NSCopying> {
    NSString *_participantState;
    int _payload;
    NSString *_transportControlState;
    struct { unsigned char payload : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
