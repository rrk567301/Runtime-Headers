@class NSUUID, NSString, NSArray, NSData, NSDate, ATXSuggestionRequestResponse;

@interface ATXClientModelCacheUpdate : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper> {
    double _absoluteCacheCreationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSData *feedbackMetadata;
@property (readonly, nonatomic) NSDate *cacheCreationDate;
@property (readonly, nonatomic) ATXSuggestionRequestResponse *suggestionRequestResponse;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jsonRawData;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (id)_clientModelFromClientModelId:(id)a0 suggestions:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClientModelId:(id)a0 suggestions:(id)a1 feedbackMetadata:(id)a2 responseForRealTimeRequest:(id)a3;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (BOOL)isEqualToATXClientModelCacheUpdate:(id)a0;
- (id)encodeAsProto;
- (id)init;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithClientModelId:(id)a0 suggestions:(id)a1 feedbackMetadata:(id)a2 responseForRealTimeRequest:(id)a3 uuid:(id)a4 cacheCreationDate:(id)a5;
- (id)json;

@end
