@class NSString, NSArray, NSUUID, NSDate;

@interface ATXLightweightClientModelCacheUpdate : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *cacheCreationDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (id)init;
- (id)jsonDict;
- (id)serialize;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientModelCacheUpdate:(id)a0;
- (id)initWithClientModelId:(id)a0 suggestions:(id)a1 uuid:(id)a2 cacheCreationDate:(id)a3;
- (BOOL)isEqualToATXLightweightClientModelCacheUpdate:(id)a0;

@end
