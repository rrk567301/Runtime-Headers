@class NSData, HMPBHomeReference;

@interface HMPBAccessoryReference : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHomeReference;
@property (retain, nonatomic) HMPBHomeReference *homeReference;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSData *uniqueIdentifier;

+ (id)accessoryReferenceWithAccessory:(id)a0;
+ (id)accessoryReferenceWithData:(id)a0;

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

@end
