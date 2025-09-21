@class NSData, HMPBHomeReference;

@interface HMPBAccessoryReference : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasHomeReference;
@property (retain, nonatomic) HMPBHomeReference *homeReference;
@property (readonly, nonatomic) char hasUniqueIdentifier;
@property (retain, nonatomic) NSData *uniqueIdentifier;

+ (id)accessoryReferenceWithAccessory:(id)a0;
+ (id)accessoryReferenceWithData:(id)a0;

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

@end
