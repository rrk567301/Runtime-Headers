@class NSString, NSMutableArray, NSData;

@interface BCSCallerIdParquetMessage : PBCodable <NSCopying> {
    struct { unsigned char phoneHash : 1; unsigned char isVerified : 1; } _has;
}

@property (nonatomic) BOOL hasPhoneHash;
@property (nonatomic) long long phoneHash;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSMutableArray *names;
@property (readonly, nonatomic) BOOL hasLogo;
@property (retain, nonatomic) NSData *logo;
@property (nonatomic) BOOL hasIsVerified;
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSMutableArray *intents;
@property (readonly, nonatomic) BOOL hasLogoFormat;
@property (retain, nonatomic) NSString *logoFormat;

+ (Class)intentType;
+ (Class)nameType;

- (unsigned long long)namesCount;
- (void)clearNames;
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
- (void)addName:(id)a0;
- (id)nameAtIndex:(unsigned long long)a0;
- (void)addIntent:(id)a0;
- (void)clearIntents;
- (id)intentAtIndex:(unsigned long long)a0;
- (unsigned long long)intentsCount;

@end
