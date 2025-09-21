@class NSString, NSMutableArray;

@interface CKDPProtectionInfoKeysToRemove : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keysToRemoves;
@property (readonly, nonatomic) BOOL hasProtectionInfoTag;
@property (retain, nonatomic) NSString *protectionInfoTag;

+ (Class)keysToRemoveType;

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
- (void)addKeysToRemove:(id)a0;
- (void)clearKeysToRemoves;
- (id)keysToRemoveAtIndex:(unsigned long long)a0;
- (unsigned long long)keysToRemovesCount;

@end
