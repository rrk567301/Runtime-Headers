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

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)jsonRawData;
- (id)initWithClientModelId:(id)a0 suggestions:(id)a1 feedbackMetadata:(id)a2 responseForRealTimeRequest:(id)a3;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClientModelId:(id)a0 suggestions:(id)a1 feedbackMetadata:(id)a2 responseForRealTimeRequest:(id)a3 uuid:(id)a4 cacheCreationDate:(id)a5;
- (id)init;
- (id)serialize;
- (BOOL)isEqualToATXClientModelCacheUpdate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)_clientModelFromClientModelId:(id)a0 suggestions:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
