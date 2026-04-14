@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tuningSuggestionType;
@property (readonly, nonatomic) int suggestionType;

- (id)jsonRawData;
- (id)description;
- (id)init;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)feedbackKeyComponent;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSuggestionType:(long long)a0;
- (BOOL)isEqualToATXInterruptionManagerTuningSuggestion:(id)a0;

@end
