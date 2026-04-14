@class NSString, NSMutableArray;

@interface _ICLLPlaybackSyncStateQuery : PBCodable <NSCopying> {
    NSString *_currentItemId;
    NSString *_initialAVSyncStartItemId;
    NSMutableArray *_participantStates;
    NSMutableArray *_transportControlStates;
    BOOL _initialAVSyncInitiator;
    struct { unsigned char initialAVSyncInitiator : 1; } _has;
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
