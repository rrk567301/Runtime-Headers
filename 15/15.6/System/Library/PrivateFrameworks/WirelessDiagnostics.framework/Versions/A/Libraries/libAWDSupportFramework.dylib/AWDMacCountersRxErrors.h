@interface AWDMacCountersRxErrors : PBCodable <NSCopying> {
    struct { unsigned char rxbadfcs : 1; unsigned char rxbadplcp : 1; unsigned char rxcrsglitch : 1; unsigned char rxfrmtoolong : 1; unsigned char rxfrmtooshrt : 1; unsigned char rxinvmachdr : 1; unsigned char rxstrt : 1; } _has;
}

@property (nonatomic) char hasRxfrmtoolong;
@property (nonatomic) unsigned long long rxfrmtoolong;
@property (nonatomic) char hasRxfrmtooshrt;
@property (nonatomic) unsigned long long rxfrmtooshrt;
@property (nonatomic) char hasRxinvmachdr;
@property (nonatomic) unsigned long long rxinvmachdr;
@property (nonatomic) char hasRxbadfcs;
@property (nonatomic) unsigned long long rxbadfcs;
@property (nonatomic) char hasRxbadplcp;
@property (nonatomic) unsigned long long rxbadplcp;
@property (nonatomic) char hasRxcrsglitch;
@property (nonatomic) unsigned long long rxcrsglitch;
@property (nonatomic) char hasRxstrt;
@property (nonatomic) unsigned long long rxstrt;

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
