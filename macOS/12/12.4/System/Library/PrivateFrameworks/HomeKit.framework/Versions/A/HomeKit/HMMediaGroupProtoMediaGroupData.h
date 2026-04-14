@class NSString, NSMutableArray, HMMediaGroupProtoMediaSystemRoles;

@interface HMMediaGroupProtoMediaGroupData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (retain, nonatomic) NSMutableArray *destinationIdentifiers;
@property (readonly, nonatomic) BOOL hasAssociatedGroupIdentifier;
@property (retain, nonatomic) NSString *associatedGroupIdentifier;
@property (readonly, nonatomic) BOOL hasMediaSystem;
@property (retain, nonatomic) HMMediaGroupProtoMediaSystemRoles *mediaSystem;

+ (Class)destinationIdentifiersType;

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
- (void)addDestinationIdentifiers:(id)a0;
- (unsigned long long)destinationIdentifiersCount;
- (void)clearDestinationIdentifiers;
- (id)destinationIdentifiersAtIndex:(unsigned long long)a0;

@end
