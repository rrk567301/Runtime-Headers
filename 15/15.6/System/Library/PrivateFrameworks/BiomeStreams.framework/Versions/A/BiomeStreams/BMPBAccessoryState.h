@class NSString, NSData;

@interface BMPBAccessoryState : PBCodable <NSCopying> {
    struct { unsigned char numValue : 1; unsigned char valueType : 1; } _has;
}

@property (readonly, nonatomic) char hasMediaPropertyType;
@property (retain, nonatomic) NSString *mediaPropertyType;
@property (nonatomic) char hasValueType;
@property (nonatomic) int valueType;
@property (readonly, nonatomic) char hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) char hasNumValue;
@property (nonatomic) double numValue;

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
- (int)StringAsValueType:(id)a0;
- (id)valueTypeAsString:(int)a0;

@end
