@class NSString, NSMutableArray, NSData;

@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying> {
    struct { unsigned char isPassInLibrary : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *shareableCredentials;
@property (readonly, nonatomic) char hasMessageCaption;
@property (retain, nonatomic) NSString *messageCaption;
@property (readonly, nonatomic) char hasDataString;
@property (retain, nonatomic) NSString *dataString;
@property (readonly, nonatomic) char hasPolicyIdentifier;
@property (retain, nonatomic) NSString *policyIdentifier;
@property (readonly, nonatomic) char hasPassThumbnailImage;
@property (retain, nonatomic) NSData *passThumbnailImage;
@property (nonatomic) char hasIsPassInLibrary;
@property (nonatomic) char isPassInLibrary;

+ (Class)shareableCredentialsType;

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
- (void)addShareableCredentials:(id)a0;
- (void)clearShareableCredentials;
- (id)shareableCredentialsAtIndex:(unsigned long long)a0;
- (unsigned long long)shareableCredentialsCount;

@end
