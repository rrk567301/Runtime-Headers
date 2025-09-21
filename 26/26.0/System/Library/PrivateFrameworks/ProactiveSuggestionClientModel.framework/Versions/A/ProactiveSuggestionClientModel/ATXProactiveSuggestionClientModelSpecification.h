@class NSString;

@interface ATXProactiveSuggestionClientModelSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSString *clientModelVersion;
@property (readonly, nonatomic) unsigned long long engagementResetPolicy;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)jsonRawData;
- (id)encodeAsProto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)fuzzyIsEqualToClientModelSpecification:(id)a0;
- (id)initWithClientModelId:(id)a0 clientModelVersion:(id)a1;
- (id)description;
- (id)initWithClientModelId:(id)a0 clientModelVersion:(id)a1 engagementResetPolicy:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
