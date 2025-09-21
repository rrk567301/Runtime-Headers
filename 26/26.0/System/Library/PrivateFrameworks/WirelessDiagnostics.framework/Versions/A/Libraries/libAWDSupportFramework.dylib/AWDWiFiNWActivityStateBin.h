@class NSString;

@interface AWDWiFiNWActivityStateBin : PBCodable <NSCopying> {
    struct { unsigned char residentTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasState;
@property (retain, nonatomic) NSString *state;
@property (nonatomic) BOOL hasResidentTime;
@property (nonatomic) unsigned long long residentTime;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
