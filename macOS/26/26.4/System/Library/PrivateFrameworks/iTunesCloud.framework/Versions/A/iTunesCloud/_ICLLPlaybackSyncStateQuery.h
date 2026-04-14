@class NSString, NSMutableArray;

@interface _ICLLPlaybackSyncStateQuery : PBCodable <NSCopying> {
    NSString *_currentItemId;
    NSString *_initialAVSyncStartItemId;
    NSMutableArray *_participantStates;
    NSMutableArray *_transportControlStates;
    BOOL _initialAVSyncInitiator;
    struct { unsigned char initialAVSyncInitiator : 1; } _has;
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
