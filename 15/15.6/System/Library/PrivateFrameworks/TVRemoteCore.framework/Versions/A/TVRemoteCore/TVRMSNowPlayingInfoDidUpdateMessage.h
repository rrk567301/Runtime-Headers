@class TVRMSNowPlayingInfoMessage;

@interface TVRMSNowPlayingInfoDidUpdateMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) char hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (readonly, nonatomic) char hasNowPlayingInfo;
@property (retain, nonatomic) TVRMSNowPlayingInfoMessage *nowPlayingInfo;

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
