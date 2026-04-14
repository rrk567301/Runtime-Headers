@class NSData, NSString, NSMutableArray;

@interface ADLogAnalyticsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL hasContentiAdID;
@property (retain, nonatomic) NSData *contentiAdID;
@property (readonly, nonatomic) BOOL hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (retain, nonatomic) NSMutableArray *events;

+ (id)options;
+ (Class)eventsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
