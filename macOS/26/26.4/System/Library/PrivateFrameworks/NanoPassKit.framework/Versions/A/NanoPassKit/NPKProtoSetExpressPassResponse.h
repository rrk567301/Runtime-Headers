@class NSString, NSMutableArray, NSData;

@interface NPKProtoSetExpressPassResponse : PBCodable <NSCopying> {
    struct { unsigned char cancelled : 1; unsigned char needsUnlock : 1; unsigned char pending : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL hasNeedsUnlock;
@property (nonatomic) BOOL needsUnlock;
@property (readonly, nonatomic) BOOL hasActualUniqueID;
@property (retain, nonatomic) NSString *actualUniqueID;
@property (retain, nonatomic) NSMutableArray *currentUniqueIDs;
@property (readonly, nonatomic) BOOL hasActualExpressPassInformation;
@property (retain, nonatomic) NSData *actualExpressPassInformation;
@property (retain, nonatomic) NSMutableArray *currentExpressPassesInformations;
@property (retain, nonatomic) NSMutableArray *expressPassConfigurations;

+ (Class)currentExpressPassesInformationType;
+ (Class)currentUniqueIDsType;
+ (Class)expressPassConfigurationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addCurrentExpressPassesInformation:(id)a0;
- (void)addCurrentUniqueIDs:(id)a0;
- (void)addExpressPassConfigurations:(id)a0;
- (void)clearCurrentExpressPassesInformations;
- (void)clearCurrentUniqueIDs;
- (void)clearExpressPassConfigurations;
- (id)currentExpressPassesInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)currentExpressPassesInformationsCount;
- (id)currentUniqueIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)currentUniqueIDsCount;
- (id)expressPassConfigurationsAtIndex:(unsigned long long)a0;
- (unsigned long long)expressPassConfigurationsCount;

@end
