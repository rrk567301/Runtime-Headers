@class NSString, NSData, HDCodableMetadataDictionary;

@interface HDCodableHealthObject : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char externalSyncObjectCode : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) char hasMetadataDictionary;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary;
@property (readonly, nonatomic) char hasSourceBundleIdentifier;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) char hasExternalSyncObjectCode;
@property (nonatomic) long long externalSyncObjectCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)decodedMetadata;
- (char)applyToObject:(id)a0;

@end
