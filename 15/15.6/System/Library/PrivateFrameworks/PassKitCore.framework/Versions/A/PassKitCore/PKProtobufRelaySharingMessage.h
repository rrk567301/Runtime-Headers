@class NSString, NSData, NSMutableArray;

@interface PKProtobufRelaySharingMessage : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) char hasThumbnailImage;
@property (retain, nonatomic) NSData *thumbnailImage;
@property (readonly, nonatomic) char hasStatus;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSMutableArray *mailboxURLs;
@property (readonly, nonatomic) char hasLocalData;
@property (retain, nonatomic) NSData *localData;
@property (readonly, nonatomic) char hasProvisioningCredentialHash;
@property (retain, nonatomic) NSString *provisioningCredentialHash;
@property (readonly, nonatomic) char hasCarKeyReaderIdentifier;
@property (retain, nonatomic) NSString *carKeyReaderIdentifier;

+ (Class)mailboxURLsType;

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
- (void)addMailboxURLs:(id)a0;
- (void)clearMailboxURLs;
- (id)mailboxURLsAtIndex:(unsigned long long)a0;
- (unsigned long long)mailboxURLsCount;

@end
