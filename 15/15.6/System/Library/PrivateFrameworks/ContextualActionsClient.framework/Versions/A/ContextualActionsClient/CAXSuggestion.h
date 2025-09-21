@class NSArray, NSString, NSUUID;

@interface CAXSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *suggestedActions;
@property (retain, nonatomic) NSString *modelVersion;
@property (retain, nonatomic) NSUUID *blendingCacheUpdateUUID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (id)initWithSuggestedActions:(id)a0 modelVersion:(id)a1;

@end
