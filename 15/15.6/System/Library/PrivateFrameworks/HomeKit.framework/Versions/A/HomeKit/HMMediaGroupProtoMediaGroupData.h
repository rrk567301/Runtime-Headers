@class NSString, NSMutableArray, HMMediaGroupProtoMediaGroupRole;

@interface HMMediaGroupProtoMediaGroupData : PBCodable <NSCopying> {
    struct { unsigned char isDefaultName : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (retain, nonatomic) NSMutableArray *destinationIdentifiers;
@property (readonly, nonatomic) char hasAssociatedGroupIdentifier;
@property (retain, nonatomic) NSString *associatedGroupIdentifier;
@property (readonly, nonatomic) char hasGroupRole;
@property (retain, nonatomic) HMMediaGroupProtoMediaGroupRole *groupRole;
@property (nonatomic) char hasIsDefaultName;
@property (nonatomic) char isDefaultName;

+ (Class)destinationIdentifiersType;

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
- (void)addDestinationIdentifiers:(id)a0;
- (void)clearDestinationIdentifiers;
- (id)destinationIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)destinationIdentifiersCount;

@end
