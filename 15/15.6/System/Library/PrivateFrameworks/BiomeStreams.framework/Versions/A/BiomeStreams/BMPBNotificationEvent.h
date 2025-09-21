@class NSString, NSMutableArray;

@interface BMPBNotificationEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char badge : 1; unsigned char usageType : 1; unsigned char isGroupMessage : 1; } _has;
}

@property (readonly, nonatomic) char hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) char hasUsageType;
@property (nonatomic) int usageType;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) char hasNotificationID;
@property (retain, nonatomic) NSString *notificationID;
@property (readonly, nonatomic) char hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) char hasBody;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) char hasBadge;
@property (nonatomic) unsigned long long badge;
@property (readonly, nonatomic) char hasThreadID;
@property (retain, nonatomic) NSString *threadID;
@property (readonly, nonatomic) char hasCategoryID;
@property (retain, nonatomic) NSString *categoryID;
@property (readonly, nonatomic) char hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSMutableArray *contactIDs;
@property (nonatomic) char hasIsGroupMessage;
@property (nonatomic) char isGroupMessage;

+ (Class)contactIDsType;

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
- (void)clearContactIDs;
- (unsigned long long)contactIDsCount;
- (int)StringAsUsageType:(id)a0;
- (void)addContactIDs:(id)a0;
- (id)contactIDsAtIndex:(unsigned long long)a0;
- (id)usageTypeAsString:(int)a0;

@end
