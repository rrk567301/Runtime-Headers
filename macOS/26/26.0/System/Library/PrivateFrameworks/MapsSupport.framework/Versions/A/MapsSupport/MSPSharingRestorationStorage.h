@class NSString, NSMutableArray, PBUnknownFields;

@interface MSPSharingRestorationStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char createdTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasCreatedTimestamp;
@property (nonatomic) double createdTimestamp;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSMutableArray *mapsIdentifiers;
@property (retain, nonatomic) NSMutableArray *messagesIdentifiers;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)mapsIdentifierType;
+ (Class)messagesIdentifierType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addMapsIdentifier:(id)a0;
- (void)addMessagesIdentifier:(id)a0;
- (void)clearMapsIdentifiers;
- (void)clearMessagesIdentifiers;
- (id)mapsIdentifierAtIndex:(unsigned long long)a0;
- (unsigned long long)mapsIdentifiersCount;
- (id)messagesIdentifierAtIndex:(unsigned long long)a0;
- (unsigned long long)messagesIdentifiersCount;

@end
