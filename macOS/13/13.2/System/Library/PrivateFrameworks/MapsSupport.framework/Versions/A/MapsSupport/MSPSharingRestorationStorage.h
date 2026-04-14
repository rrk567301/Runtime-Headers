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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearMapsIdentifiers;
- (void)addMapsIdentifier:(id)a0;
- (unsigned long long)mapsIdentifiersCount;
- (id)mapsIdentifierAtIndex:(unsigned long long)a0;
- (void)clearMessagesIdentifiers;
- (void)addMessagesIdentifier:(id)a0;
- (unsigned long long)messagesIdentifiersCount;
- (id)messagesIdentifierAtIndex:(unsigned long long)a0;

@end
