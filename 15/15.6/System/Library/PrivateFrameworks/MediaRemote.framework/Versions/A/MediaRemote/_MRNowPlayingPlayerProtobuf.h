@class NSString;

@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _mxSessionIDs;
    struct { unsigned char audioSessionID : 1; unsigned char audioSessionType : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) char hasAudioSessionType;
@property (nonatomic) int audioSessionType;
@property (readonly, nonatomic) unsigned long long mxSessionIDsCount;
@property (readonly, nonatomic) long long *mxSessionIDs;
@property (nonatomic) char hasAudioSessionID;
@property (nonatomic) unsigned int audioSessionID;
@property (readonly, nonatomic) char hasIconURL;
@property (retain, nonatomic) NSString *iconURL;

- (void)dealloc;
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
- (void)addMxSessionID:(long long)a0;
- (int)StringAsAudioSessionType:(id)a0;
- (id)audioSessionTypeAsString:(int)a0;
- (void)clearMxSessionIDs;
- (long long)mxSessionIDAtIndex:(unsigned long long)a0;
- (void)setMxSessionIDs:(long long *)a0 count:(unsigned long long)a1;

@end
