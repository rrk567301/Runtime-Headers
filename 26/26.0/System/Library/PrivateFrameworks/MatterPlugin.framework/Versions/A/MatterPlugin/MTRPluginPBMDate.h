@class NSDate;

@interface MTRPluginPBMDate : PBCodable <NSCopying> {
    struct { unsigned char value : 1; } _has;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDate:(id)a0;

@end
