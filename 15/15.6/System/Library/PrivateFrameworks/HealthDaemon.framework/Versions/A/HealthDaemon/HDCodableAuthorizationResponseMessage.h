@class NSString, NSData;

@interface HDCodableAuthorizationResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char shouldPrompt : 1; } _has;
}

@property (readonly, nonatomic) char hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) char hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier;
@property (nonatomic) char hasShouldPrompt;
@property (nonatomic) char shouldPrompt;
@property (readonly, nonatomic) char hasHostAppName;
@property (retain, nonatomic) NSString *hostAppName;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
