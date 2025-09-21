@interface ATXProactiveSuggestionLayoutConfig : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long applicableLayoutType;

+ (id)layoutConfigurationsForLayoutOptions:(unsigned long long)a0;

- (id)encodeAsProto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithApplicableSuggestionLayout:(long long)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
