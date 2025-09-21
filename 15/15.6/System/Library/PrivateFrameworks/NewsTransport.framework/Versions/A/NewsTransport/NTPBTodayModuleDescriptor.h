@class NSString, NSMutableArray;

@interface NTPBTodayModuleDescriptor : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *availableContents;

+ (Class)availableContentsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAvailableContents:(id)a0;
- (id)availableContentsAtIndex:(unsigned long long)a0;
- (unsigned long long)availableContentsCount;
- (void)clearAvailableContents;

@end
