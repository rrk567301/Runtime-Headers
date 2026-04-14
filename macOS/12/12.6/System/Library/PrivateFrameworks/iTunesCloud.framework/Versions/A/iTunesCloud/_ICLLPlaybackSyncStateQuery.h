@class NSString, NSMutableArray;

@interface _ICLLPlaybackSyncStateQuery : PBCodable <NSCopying> {
    NSString *_currentItemId;
    NSMutableArray *_participantStates;
    NSMutableArray *_transportControlStates;
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
