@class NSString, NSData;

@interface NPKProtoSetExpressPassRequest : PBRequest <NSCopying> {
    struct { unsigned char cancelOutstandingRequests : 1; unsigned char requestAuthorization : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) BOOL hasCancelOutstandingRequests;
@property (nonatomic) BOOL cancelOutstandingRequests;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) BOOL hasRequestAuthorization;
@property (nonatomic) BOOL requestAuthorization;
@property (readonly, nonatomic) BOOL hasExpressPassInformation;
@property (retain, nonatomic) NSData *expressPassInformation;
@property (readonly, nonatomic) BOOL hasExpressPassConfiguration;
@property (retain, nonatomic) NSData *expressPassConfiguration;

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

@end
