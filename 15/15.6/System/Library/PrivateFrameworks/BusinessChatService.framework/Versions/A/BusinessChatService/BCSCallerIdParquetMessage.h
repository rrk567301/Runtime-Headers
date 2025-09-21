@class NSString, NSMutableArray, NSData;

@interface BCSCallerIdParquetMessage : PBCodable <NSCopying> {
    struct { unsigned char phoneHash : 1; unsigned char isVerified : 1; } _has;
}

@property (nonatomic) char hasPhoneHash;
@property (nonatomic) long long phoneHash;
@property (readonly, nonatomic) char hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSMutableArray *names;
@property (readonly, nonatomic) char hasLogo;
@property (retain, nonatomic) NSData *logo;
@property (nonatomic) char hasIsVerified;
@property (nonatomic) char isVerified;
@property (retain, nonatomic) NSMutableArray *intents;
@property (readonly, nonatomic) char hasLogoFormat;
@property (retain, nonatomic) NSString *logoFormat;

+ (Class)intentType;
+ (Class)nameType;

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
- (void)addName:(id)a0;
- (void)clearNames;
- (id)nameAtIndex:(unsigned long long)a0;
- (unsigned long long)namesCount;
- (void)addIntent:(id)a0;
- (void)clearIntents;
- (id)intentAtIndex:(unsigned long long)a0;
- (unsigned long long)intentsCount;

@end
