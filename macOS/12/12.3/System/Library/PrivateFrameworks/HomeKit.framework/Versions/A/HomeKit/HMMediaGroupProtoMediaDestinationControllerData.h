@class NSString, NSMutableArray;

@interface HMMediaGroupProtoMediaDestinationControllerData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (readonly, nonatomic) BOOL hasDestinationIdentifier;
@property (retain, nonatomic) NSString *destinationIdentifier;
@property (retain, nonatomic) NSMutableArray *availableDestinations;

+ (Class)availableDestinationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addAvailableDestinations:(id)a0;
- (unsigned long long)availableDestinationsCount;
- (void)clearAvailableDestinations;
- (id)availableDestinationsAtIndex:(unsigned long long)a0;

@end
