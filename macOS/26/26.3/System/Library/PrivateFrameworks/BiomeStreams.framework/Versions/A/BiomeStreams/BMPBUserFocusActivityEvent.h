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

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
