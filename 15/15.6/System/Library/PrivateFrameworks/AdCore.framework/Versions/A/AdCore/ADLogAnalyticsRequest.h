@class NSData, NSString, NSMutableArray;

@interface ADLogAnalyticsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) char hasContentiAdID;
@property (retain, nonatomic) NSData *contentiAdID;
@property (readonly, nonatomic) char hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (retain, nonatomic) NSMutableArray *events;

+ (id)options;
+ (Class)eventsType;

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
- (void)addEvents:(id)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
