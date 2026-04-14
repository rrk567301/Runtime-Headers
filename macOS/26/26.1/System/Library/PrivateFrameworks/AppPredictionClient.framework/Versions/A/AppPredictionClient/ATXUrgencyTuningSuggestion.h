@interface ATXUrgencyTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

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
- (BOOL)isEqualToATXUrgencyTuningSuggestion:(id)a0;

@end
