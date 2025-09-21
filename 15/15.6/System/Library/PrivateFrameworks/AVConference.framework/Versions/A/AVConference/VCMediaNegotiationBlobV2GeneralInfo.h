@class NSString;

@interface VCMediaNegotiationBlobV2GeneralInfo : PBCodable <NSCopying> {
    struct { unsigned char ntpTime : 1; unsigned char abSwitches : 1; unsigned char screenRes : 1; } _has;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } screenResolution;
@property (readonly, nonatomic) union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; } creationTime;
@property (nonatomic) char hasNtpTime;
@property (nonatomic) unsigned long long ntpTime;
@property (readonly, nonatomic) char hasCname;
@property (retain, nonatomic) NSString *cname;
@property (nonatomic) char hasAbSwitches;
@property (nonatomic) unsigned int abSwitches;
@property (nonatomic) char hasScreenRes;
@property (nonatomic) unsigned int screenRes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithCreationTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 screenResolution:(struct CGSize { double x0; double x1; })a1 abSwitches:(unsigned int)a2;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;

@end
