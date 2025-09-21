@class NSString;

@interface BMPBUserFocusActivityEvent : PBCodable <NSCopying> {
    struct { unsigned char isStart : 1; } _has;
}

@property (nonatomic) char hasIsStart;
@property (nonatomic) char isStart;
@property (readonly, nonatomic) char hasMode;
@property (retain, nonatomic) NSString *mode;
@property (readonly, nonatomic) char hasClientID;
@property (retain, nonatomic) NSString *clientID;

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
