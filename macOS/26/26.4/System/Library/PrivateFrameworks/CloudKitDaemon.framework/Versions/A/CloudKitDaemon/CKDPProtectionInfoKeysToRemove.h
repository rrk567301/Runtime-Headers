@class NSString, NSMutableArray;

@interface CKDPProtectionInfoKeysToRemove : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keysToRemoves;
@property (readonly, nonatomic) BOOL hasProtectionInfoTag;
@property (retain, nonatomic) NSString *protectionInfoTag;

+ (Class)keysToRemoveType;

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
- (void)addKeysToRemove:(id)a0;
- (void)clearKeysToRemoves;
- (id)keysToRemoveAtIndex:(unsigned long long)a0;
- (unsigned long long)keysToRemovesCount;

@end
