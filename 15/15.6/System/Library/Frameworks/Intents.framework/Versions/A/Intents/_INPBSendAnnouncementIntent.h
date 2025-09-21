@class NSArray, _INPBAnnouncement, NSString, _INPBIntentMetadata;

@interface _INPBSendAnnouncementIntent : PBCodable <_INPBSendAnnouncementIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char isReply : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBAnnouncement *announcement;
@property (readonly, nonatomic) char hasAnnouncement;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) char isReply;
@property (nonatomic) char hasIsReply;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (copy, nonatomic) NSString *sharedUserID;
@property (readonly, nonatomic) char hasSharedUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recipientsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRecipients:(id)a0;
- (void)clearRecipients;
- (id)recipientsAtIndex:(unsigned long long)a0;

@end
