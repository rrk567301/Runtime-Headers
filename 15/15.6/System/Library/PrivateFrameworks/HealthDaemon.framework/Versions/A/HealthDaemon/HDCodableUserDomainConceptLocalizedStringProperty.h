@class NSString;

@interface HDCodableUserDomainConceptLocalizedStringProperty : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char type : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
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
