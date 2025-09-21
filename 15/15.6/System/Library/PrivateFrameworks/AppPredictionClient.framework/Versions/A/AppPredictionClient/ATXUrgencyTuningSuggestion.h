@interface ATXUrgencyTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)feedbackKeyComponent;
- (char)isEqualToATXUrgencyTuningSuggestion:(id)a0;
- (id)jsonRawData;

@end
