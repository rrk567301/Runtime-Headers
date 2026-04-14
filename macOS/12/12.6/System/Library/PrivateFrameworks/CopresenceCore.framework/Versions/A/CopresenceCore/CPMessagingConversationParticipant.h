@class CPMessagingHandle, NSData;

@interface CPMessagingConversationParticipant : PBCodable <NSCopying> {
    struct { unsigned char identifier : 1; unsigned char version : 1; unsigned char isGondolaCallingAvailable : 1; unsigned char isMirageAvailable : 1; unsigned char isMomentsAvailable : 1; unsigned char isScreenSharingAvailable : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) CPMessagingHandle *handle;
@property (readonly, nonatomic) BOOL hasAvcData;
@property (retain, nonatomic) NSData *avcData;
@property (nonatomic) BOOL hasIsMomentsAvailable;
@property (nonatomic) BOOL isMomentsAvailable;
@property (nonatomic) BOOL hasIsScreenSharingAvailable;
@property (nonatomic) BOOL isScreenSharingAvailable;
@property (nonatomic) BOOL hasIsGondolaCallingAvailable;
@property (nonatomic) BOOL isGondolaCallingAvailable;
@property (nonatomic) BOOL hasIsMirageAvailable;
@property (nonatomic) BOOL isMirageAvailable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
