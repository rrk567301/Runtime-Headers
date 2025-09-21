@class NSString;

@interface C2MPGenericEventMetricValue : PBCodable <NSCopying> {
    struct { unsigned char dateValue : 1; unsigned char doubleValue : 1; } _has;
}

@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) char hasDateValue;
@property (nonatomic) unsigned long long dateValue;

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
