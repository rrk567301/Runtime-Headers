@class NSString, NSMutableArray;

@interface NTPBTodayModuleDescriptor : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *availableContents;

+ (Class)availableContentsType;

- (id)availableContentsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearAvailableContents;
- (void)writeTo:(id)a0;
- (void)addAvailableContents:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)availableContentsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
