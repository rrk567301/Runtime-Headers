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

- (id)dictionaryRepresentation;
- (void)addBundleChannelTagIDs:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)bundleChannelTagIDsCount;
- (void)writeTo:(id)a0;
- (void)clearChannelTagIDs;
- (void)clearBundleChannelTagIDs;
- (unsigned long long)channelTagIDsCount;
- (id)channelTagIDsAtIndex:(unsigned long long)a0;
- (void)addChannelTagIDs:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)bundleChannelTagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;

@end
