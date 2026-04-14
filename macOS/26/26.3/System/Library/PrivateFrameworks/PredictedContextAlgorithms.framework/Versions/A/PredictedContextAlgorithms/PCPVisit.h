@class NSData, PCPLocation;

@interface PCPVisit : PBCodable <NSCopying> {
    struct { unsigned char entryTimeCFAbsolute : 1; unsigned char exitTimeCFAbsolute : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) PCPLocation *location;
@property (nonatomic) BOOL hasEntryTimeCFAbsolute;
@property (nonatomic) double entryTimeCFAbsolute;
@property (nonatomic) BOOL hasExitTimeCFAbsolute;
@property (nonatomic) double exitTimeCFAbsolute;
@property (readonly, nonatomic) BOOL hasLoiIdentifier;
@property (retain, nonatomic) NSData *loiIdentifier;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
