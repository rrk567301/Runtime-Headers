@class NSData, NSString;

@interface HKHealthWrapCodableMessageHeader : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char trailingHMACLength : 1; unsigned char trailingSHALength : 1; unsigned char compressed : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (readonly, nonatomic) char hasEncryptedMessageKey;
@property (retain, nonatomic) NSData *encryptedMessageKey;
@property (readonly, nonatomic) char hasEncryptionIdentity;
@property (retain, nonatomic) NSData *encryptionIdentity;
@property (readonly, nonatomic) char hasUploadUUID;
@property (retain, nonatomic) NSData *uploadUUID;
@property (readonly, nonatomic) char hasStudyIdentifier;
@property (retain, nonatomic) NSString *studyIdentifier;
@property (readonly, nonatomic) char hasEncryptedHMACKey;
@property (retain, nonatomic) NSData *encryptedHMACKey;
@property (nonatomic) char hasTrailingHMACLength;
@property (nonatomic) int trailingHMACLength;
@property (nonatomic) char hasTrailingSHALength;
@property (nonatomic) int trailingSHALength;
@property (nonatomic) char hasCompressed;
@property (nonatomic) char compressed;
@property (readonly, nonatomic) char hasStudyUUID;
@property (retain, nonatomic) NSData *studyUUID;

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
