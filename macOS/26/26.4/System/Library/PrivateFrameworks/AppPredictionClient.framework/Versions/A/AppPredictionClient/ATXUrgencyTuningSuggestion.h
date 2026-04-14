@interface ATXUrgencyTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)feedbackKeyComponent;
- (id)initWithProto:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)jsonRawData;
- (BOOL)isEqualToATXUrgencyTuningSuggestion:(id)a0;

@end
