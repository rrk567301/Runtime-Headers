@class NSString;

@interface HDCodableUserDomainConceptNamedQuantity : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char type : 1; unsigned char value : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasValue;
@property (nonatomic) double value;
@property (readonly, nonatomic) char hasUnit;
@property (retain, nonatomic) NSString *unit;
@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;

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
