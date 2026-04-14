@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasAppAdamID;
@property (retain, nonatomic) NSString *appAdamID;
@property (retain, nonatomic) NSMutableArray *channelTagIDs;
@property (retain, nonatomic) NSMutableArray *bundleChannelTagIDs;
@property (readonly, nonatomic) BOOL hasBundleChannelTagIDsVersion;
@property (retain, nonatomic) NSString *bundleChannelTagIDsVersion;

+ (Class)bundleChannelTagIDsType;
+ (Class)channelTagIDsType;

- (void)addBundleChannelTagIDs:(id)a0;
- (unsigned long long)channelTagIDsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)bundleChannelTagIDsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleChannelTagIDsAtIndex:(unsigned long long)a0;
- (void)clearBundleChannelTagIDs;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addChannelTagIDs:(id)a0;
- (id)channelTagIDsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)clearChannelTagIDs;
- (id)dictionaryRepresentation;
- (void)dealloc;

@end
