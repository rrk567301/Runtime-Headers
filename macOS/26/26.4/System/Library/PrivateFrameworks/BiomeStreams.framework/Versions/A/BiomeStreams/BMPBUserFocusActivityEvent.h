@class NSString;

@interface BMPBUserFocusActivityEvent : PBCodable <NSCopying> {
    struct { unsigned char isStart : 1; } _has;
}

@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL hasMode;
@property (retain, nonatomic) NSString *mode;
@property (readonly, nonatomic) BOOL hasClientID;
@property (retain, nonatomic) NSString *clientID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
