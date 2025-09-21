@class NSString, GEOSharedNavState, NSMutableArray, PBUnknownFields;

@interface MSPGroupSessionStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char lastUpdateTimestamp : 1; } _has;
}

@property (readonly, nonatomic) char hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) char hasOriginatorIdentifier;
@property (retain, nonatomic) NSString *originatorIdentifier;
@property (readonly, nonatomic) char hasState;
@property (retain, nonatomic) GEOSharedNavState *state;
@property (nonatomic) char hasLastUpdateTimestamp;
@property (nonatomic) double lastUpdateTimestamp;
@property (readonly, nonatomic) char hasFromID;
@property (retain, nonatomic) NSString *fromID;
@property (retain, nonatomic) NSMutableArray *minimalStrategyIdentifiers;
@property (retain, nonatomic) NSMutableArray *liveStrategyIdentifiers;
@property (retain, nonatomic) NSMutableArray *messageStrategyIdentifiers;
@property (readonly, nonatomic) char hasReceivingHandle;
@property (retain, nonatomic) NSString *receivingHandle;
@property (readonly, nonatomic) char hasReceivingAccountIdentifier;
@property (retain, nonatomic) NSString *receivingAccountIdentifier;
@property (retain, nonatomic) NSMutableArray *smsStrategyIdentifiers;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)groupStorageWithIdentifier:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
+ (Class)liveStrategyIdentifierType;
+ (Class)messageStrategyIdentifierType;
+ (Class)minimalStrategyIdentifierType;
+ (Class)smsStrategyIdentifierType;

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
- (void)updateWithState:(id)a0;
- (void)clearMessageStrategyIdentifiers;
- (unsigned long long)messageStrategyIdentifiersCount;
- (unsigned long long)minimalStrategyIdentifiersCount;
- (void)clearMinimalStrategyIdentifiers;
- (void)addLiveStrategyIdentifier:(id)a0;
- (void)addMessageStrategyIdentifier:(id)a0;
- (void)addMinimalStrategyIdentifier:(id)a0;
- (void)addSmsStrategyIdentifier:(id)a0;
- (void)clearLiveStrategyIdentifiers;
- (void)clearSmsStrategyIdentifiers;
- (id)liveStrategyIdentifierAtIndex:(unsigned long long)a0;
- (unsigned long long)liveStrategyIdentifiersCount;
- (id)messageStrategyIdentifierAtIndex:(unsigned long long)a0;
- (id)minimalStrategyIdentifierAtIndex:(unsigned long long)a0;
- (id)smsStrategyIdentifierAtIndex:(unsigned long long)a0;
- (unsigned long long)smsStrategyIdentifiersCount;

@end
