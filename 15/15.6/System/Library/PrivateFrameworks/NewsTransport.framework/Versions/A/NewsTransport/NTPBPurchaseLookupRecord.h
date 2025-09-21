@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBPurchaseLookupRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) char hasAppAdamID;
@property (retain, nonatomic) NSString *appAdamID;
@property (retain, nonatomic) NSMutableArray *channelTagIDs;
@property (retain, nonatomic) NSMutableArray *bundleChannelTagIDs;
@property (readonly, nonatomic) char hasBundleChannelTagIDsVersion;
@property (retain, nonatomic) NSString *bundleChannelTagIDsVersion;

+ (Class)bundleChannelTagIDsType;
+ (Class)channelTagIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBundleChannelTagIDs:(id)a0;
- (void)addChannelTagIDs:(id)a0;
- (id)bundleChannelTagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleChannelTagIDsCount;
- (id)channelTagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)channelTagIDsCount;
- (void)clearBundleChannelTagIDs;
- (void)clearChannelTagIDs;

@end
