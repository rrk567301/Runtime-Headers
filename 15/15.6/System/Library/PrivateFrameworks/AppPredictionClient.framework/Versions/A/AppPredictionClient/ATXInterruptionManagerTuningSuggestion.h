@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long tuningSuggestionType;
@property (readonly, nonatomic) int suggestionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)feedbackKeyComponent;
- (id)initWithSuggestionType:(long long)a0;
- (char)isEqualToATXInterruptionManagerTuningSuggestion:(id)a0;
- (id)jsonRawData;

@end
