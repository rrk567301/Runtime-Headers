@class NSString, _INPBURLValue, _INPBFileDataAttachment;

@interface _INPBSendMessageAttachment : PBCodable <_INPBSendMessageAttachment, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBFileDataAttachment *audioMessageFile;
@property (readonly, nonatomic) char hasAudioMessageFile;
@property (retain, nonatomic) _INPBURLValue *audioMessageFileURL;
@property (readonly, nonatomic) char hasAudioMessageFileURL;
@property (nonatomic) char currentLocation;
@property (readonly, nonatomic) char hasCurrentLocation;
@property (retain, nonatomic) _INPBFileDataAttachment *file;
@property (readonly, nonatomic) char hasFile;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (readonly, nonatomic) char hasFileURL;
@property (copy, nonatomic) NSString *phAssetId;
@property (readonly, nonatomic) char hasPhAssetId;
@property (retain, nonatomic) _INPBURLValue *sharedLink;
@property (readonly, nonatomic) char hasSharedLink;
@property (retain, nonatomic) _INPBURLValue *speechDataURL;
@property (readonly, nonatomic) char hasSpeechDataURL;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) char hasTypeIdentifier;
@property (readonly, nonatomic) unsigned long long whichDatasource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
