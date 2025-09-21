@class NSUUID, NSString;

@interface ATXSuggestionRequest : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *requestUUID;
@property (readonly, nonatomic) NSString *originatorId;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) double timeout;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (char)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)initWithUUID:(id)a0 originatorId:(id)a1 consumerSubType:(unsigned char)a2;
- (id)initWithUUID:(id)a0 originatorId:(id)a1 consumerSubType:(unsigned char)a2 timeout:(double)a3;

@end
