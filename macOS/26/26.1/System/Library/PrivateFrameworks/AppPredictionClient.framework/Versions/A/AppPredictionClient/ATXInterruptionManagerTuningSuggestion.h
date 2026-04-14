@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tuningSuggestionType;
@property (readonly, nonatomic) int suggestionType;

- (unsigned long long)hash;
- (id)encodeAsProto;
- (id)jsonRawData;
- (id)initWithProtoData:(id)a0;
- (id)feedbackKeyComponent;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSuggestionType:(long long)a0;
- (BOOL)isEqualToATXInterruptionManagerTuningSuggestion:(id)a0;

@end
