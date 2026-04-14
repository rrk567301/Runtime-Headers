@class NSUUID, NSDictionary, NSString, NSDate;
@protocol ATXUICacheProtocol;

@interface ATXBlendingModelUICacheUpdate : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper> {
    double _absoluteCacheCreationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) id<ATXUICacheProtocol> uiCache;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) NSDictionary *clientModelCacheUpdateUUIDs;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *cacheCreationDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)_initWithCoder:(id)a0;
- (id)jsonRawData;
- (BOOL)isEqualToATXBlendingModelUICacheUpdate:(id)a0;
- (id)encodeAsProto;
- (id)initWithUICache:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdateUUIDs:(id)a2 uuid:(id)a3 cacheCreationDate:(id)a4;
- (id)encodeAsProtoForBiome;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (id)protoForBiome;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForint:(int)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdates:(id)a2;
- (void)setUICacheObjectOnProto:(id)a0;
- (id)initWithUICache:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdates:(id)a2;
- (id)serialize;
- (id)initWithSpotlightSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdates:(id)a2;
- (id)clientModelCacheUpdateUUIDsDictionaryFromProto:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)clientModelCacheUpdateUUIDsFromCacheUpdates:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setClientModelCacheUpdateUUIDsDictionaryOnProto:(id)a0;
- (id)initWithHomeScreenCachedSuggestions:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdates:(id)a2;
- (void)setUICacheObjectOnProtoForBiome:(id)a0;

@end
