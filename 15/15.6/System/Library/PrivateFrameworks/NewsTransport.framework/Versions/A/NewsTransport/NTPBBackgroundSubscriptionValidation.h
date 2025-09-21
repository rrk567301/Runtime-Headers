@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying> {
    struct { unsigned char resultType : 1; } _has;
}

@property (nonatomic) char hasResultType;
@property (nonatomic) int resultType;
@property (readonly, nonatomic) char hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) char hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
