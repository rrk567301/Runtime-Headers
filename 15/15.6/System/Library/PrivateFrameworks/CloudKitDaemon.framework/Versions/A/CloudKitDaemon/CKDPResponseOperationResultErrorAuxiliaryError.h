@class NSString, NSMutableArray;

@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) char hasCode;
@property (nonatomic) int code;
@property (retain, nonatomic) NSMutableArray *userInfos;

+ (Class)userInfoType;

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
- (void)addUserInfo:(id)a0;
- (void)clearUserInfos;
- (id)userInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)userInfosCount;

@end
