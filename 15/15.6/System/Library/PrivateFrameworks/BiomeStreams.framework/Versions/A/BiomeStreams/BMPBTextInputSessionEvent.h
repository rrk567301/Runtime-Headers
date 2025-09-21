@class NSString;

@interface BMPBTextInputSessionEvent : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char sessionType : 1; } _has;
}

@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) char hasSessionType;
@property (nonatomic) int sessionType;
@property (readonly, nonatomic) char hasSessionID;
@property (retain, nonatomic) NSString *sessionID;

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
- (int)StringAsSessionType:(id)a0;
- (id)sessionTypeAsString:(int)a0;

@end
