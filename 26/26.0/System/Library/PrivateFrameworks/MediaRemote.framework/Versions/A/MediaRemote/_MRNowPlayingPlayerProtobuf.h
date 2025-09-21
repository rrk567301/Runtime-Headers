@class NSString;

@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _mxSessionIDs;
    struct { unsigned char audioSessionID : 1; unsigned char audioSessionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasAudioSessionType;
@property (nonatomic) int audioSessionType;
@property (readonly, nonatomic) unsigned long long mxSessionIDsCount;
@property (readonly, nonatomic) long long *mxSessionIDs;
@property (nonatomic) BOOL hasAudioSessionID;
@property (nonatomic) unsigned int audioSessionID;
@property (readonly, nonatomic) BOOL hasIconURL;
@property (retain, nonatomic) NSString *iconURL;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (int)StringAsAudioSessionType:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearMxSessionIDs;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (long long)mxSessionIDAtIndex:(unsigned long long)a0;
- (void)setMxSessionIDs:(long long *)a0 count:(unsigned long long)a1;
- (void)writeTo:(id)a0;
- (void)addMxSessionID:(long long)a0;
- (id)audioSessionTypeAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
