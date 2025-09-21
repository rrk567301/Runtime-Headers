@class NSString, NSMutableArray;

@interface _ICLLPlaybackSyncStateQuery : PBCodable <NSCopying> {
    NSString *_currentItemId;
    NSString *_initialAVSyncStartItemId;
    NSMutableArray *_participantStates;
    NSMutableArray *_transportControlStates;
    char _initialAVSyncInitiator;
    struct { unsigned char initialAVSyncInitiator : 1; } _has;
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
