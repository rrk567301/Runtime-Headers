@class NSString, NSMutableArray;

@interface CKCDPError : PBCodable <NSCopying> {
    struct { unsigned char auxiliaryCode : 1; unsigned char code : 1; unsigned char targetPartition : 1; } _has;
}

@property (nonatomic) char hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) char hasMessage;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) char hasAuxiliaryDomain;
@property (retain, nonatomic) NSString *auxiliaryDomain;
@property (nonatomic) char hasAuxiliaryCode;
@property (nonatomic) int auxiliaryCode;
@property (retain, nonatomic) NSMutableArray *auxiliaryUserInfos;
@property (nonatomic) char hasTargetPartition;
@property (nonatomic) int targetPartition;

+ (Class)auxiliaryUserInfoType;

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
- (int)StringAsCode:(id)a0;
- (void)addAuxiliaryUserInfo:(id)a0;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)auxiliaryUserInfosCount;
- (void)clearAuxiliaryUserInfos;
- (id)codeAsString:(int)a0;

@end
