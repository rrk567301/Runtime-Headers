@class NSString;

@interface TVRMSAudioRouteMessage : PBCodable <NSCopying> {
    struct { unsigned char macAddress : 1; unsigned char selected : 1; unsigned char supportsVideo : 1; } _has;
}

@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) char hasMacAddress;
@property (nonatomic) long long macAddress;
@property (nonatomic) char hasSupportsVideo;
@property (nonatomic) char supportsVideo;
@property (nonatomic) char hasSelected;
@property (nonatomic) char selected;

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
