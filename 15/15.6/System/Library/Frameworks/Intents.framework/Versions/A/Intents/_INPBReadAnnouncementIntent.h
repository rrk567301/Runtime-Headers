@class NSString, _INPBIntentMetadata;

@interface _INPBReadAnnouncementIntent : PBCodable <_INPBReadAnnouncementIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char readType : 1; unsigned char userNotificationType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int readType;
@property (nonatomic) char hasReadType;
@property (copy, nonatomic) NSString *startAnnouncementIdentifier;
@property (readonly, nonatomic) char hasStartAnnouncementIdentifier;
@property (nonatomic) int userNotificationType;
@property (nonatomic) char hasUserNotificationType;
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
- (int)StringAsReadType:(id)a0;
- (int)StringAsUserNotificationType:(id)a0;
- (id)readTypeAsString:(int)a0;
- (id)userNotificationTypeAsString:(int)a0;

@end
