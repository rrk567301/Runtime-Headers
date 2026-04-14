@class NSString, NSMutableArray;

@interface ATXPBUserNotificationAppDigest : PBCodable <ATXJSONSerializableProtocol, NSCopying>

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSMutableArray *appMarqueeGroups;
@property (retain, nonatomic) NSMutableArray *nonAppMarqueeGroups;

+ (Class)appMarqueeGroupsType;
+ (Class)nonAppMarqueeGroupsType;

- (id)initFromJSON:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addAppMarqueeGroups:(id)a0;
- (void)addNonAppMarqueeGroups:(id)a0;
- (id)appMarqueeGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)appMarqueeGroupsCount;
- (void)clearAppMarqueeGroups;
- (void)clearNonAppMarqueeGroups;
- (id)nonAppMarqueeGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)nonAppMarqueeGroupsCount;

@end
