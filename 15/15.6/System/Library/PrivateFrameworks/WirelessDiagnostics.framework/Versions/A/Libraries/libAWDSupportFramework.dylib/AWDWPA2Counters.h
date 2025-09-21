@interface AWDWPA2Counters : PBCodable <NSCopying> {
    struct { unsigned char ccmpfmterr : 1; unsigned char ccmpreplay : 1; unsigned char ccmpundec : 1; unsigned char decsuccess : 1; unsigned char fourwayfail : 1; unsigned char tkipcntrmsr : 1; unsigned char tkipicverr : 1; unsigned char tkipmicfaill : 1; unsigned char tkipreplay : 1; unsigned char wepexcluded : 1; unsigned char wepicverr : 1; unsigned char wepundec : 1; } _has;
}

@property (nonatomic) char hasTkipmicfaill;
@property (nonatomic) unsigned long long tkipmicfaill;
@property (nonatomic) char hasTkipcntrmsr;
@property (nonatomic) unsigned long long tkipcntrmsr;
@property (nonatomic) char hasTkipreplay;
@property (nonatomic) unsigned long long tkipreplay;
@property (nonatomic) char hasCcmpfmterr;
@property (nonatomic) unsigned long long ccmpfmterr;
@property (nonatomic) char hasCcmpreplay;
@property (nonatomic) unsigned long long ccmpreplay;
@property (nonatomic) char hasCcmpundec;
@property (nonatomic) unsigned long long ccmpundec;
@property (nonatomic) char hasFourwayfail;
@property (nonatomic) unsigned long long fourwayfail;
@property (nonatomic) char hasWepundec;
@property (nonatomic) unsigned long long wepundec;
@property (nonatomic) char hasWepicverr;
@property (nonatomic) unsigned long long wepicverr;
@property (nonatomic) char hasDecsuccess;
@property (nonatomic) unsigned long long decsuccess;
@property (nonatomic) char hasTkipicverr;
@property (nonatomic) unsigned long long tkipicverr;
@property (nonatomic) char hasWepexcluded;
@property (nonatomic) unsigned long long wepexcluded;

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
