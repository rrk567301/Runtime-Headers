@class NSData, NSString, _DKPRValueType;

@interface _DKPRValue : PBCodable <NSCopying> {
    double _dateValue;
    double _doubleValue;
    long long _integerValue;
    NSData *_blobValue;
    NSString *_stringValue;
    _DKPRValueType *_type;
    struct { unsigned char dateValue : 1; unsigned char doubleValue : 1; unsigned char integerValue : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
