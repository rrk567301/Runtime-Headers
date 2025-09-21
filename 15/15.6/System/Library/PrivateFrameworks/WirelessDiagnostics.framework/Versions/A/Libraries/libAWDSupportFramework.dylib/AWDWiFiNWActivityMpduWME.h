@interface AWDWiFiNWActivityMpduWME : PBCodable <NSCopying> {
    struct { unsigned char tid0 : 1; unsigned char tid1 : 1; unsigned char tid2 : 1; unsigned char tid3 : 1; unsigned char tid4 : 1; unsigned char tid5 : 1; unsigned char tid6 : 1; unsigned char tid7 : 1; } _has;
}

@property (nonatomic) char hasTid0;
@property (nonatomic) unsigned long long tid0;
@property (nonatomic) char hasTid1;
@property (nonatomic) unsigned long long tid1;
@property (nonatomic) char hasTid2;
@property (nonatomic) unsigned long long tid2;
@property (nonatomic) char hasTid3;
@property (nonatomic) unsigned long long tid3;
@property (nonatomic) char hasTid4;
@property (nonatomic) unsigned long long tid4;
@property (nonatomic) char hasTid5;
@property (nonatomic) unsigned long long tid5;
@property (nonatomic) char hasTid6;
@property (nonatomic) unsigned long long tid6;
@property (nonatomic) char hasTid7;
@property (nonatomic) unsigned long long tid7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
