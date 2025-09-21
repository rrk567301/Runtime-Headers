@class NSString;

@interface AWDSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char migratorType : 1; unsigned char result : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasMigratorType;
@property (nonatomic) int migratorType;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) char hasResult;
@property (nonatomic) int result;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) char hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;

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
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;
- (int)StringAsMigratorType:(id)a0;
- (id)migratorTypeAsString:(int)a0;

@end
