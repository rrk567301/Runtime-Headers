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

- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)initWithProto:(id)a0;
- (id)init;
- (id)initWithClientModelCacheUpdate:(id)a0;
- (id)initWithClientModelId:(id)a0 suggestions:(id)a1 uuid:(id)a2 cacheCreationDate:(id)a3;
- (BOOL)isEqualToATXLightweightClientModelCacheUpdate:(id)a0;

@end
