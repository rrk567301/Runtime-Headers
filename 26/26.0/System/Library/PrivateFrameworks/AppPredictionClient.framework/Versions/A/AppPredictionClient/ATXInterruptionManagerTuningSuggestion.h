@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tuningSuggestionType;
@property (readonly, nonatomic) int suggestionType;

- (id)jsonRawData;
- (id)encodeAsProto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)feedbackKeyComponent;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSuggestionType:(long long)a0;
- (BOOL)isEqualToATXInterruptionManagerTuningSuggestion:(id)a0;

@end
