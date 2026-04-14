@interface ATXSendMessagesToDigestSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

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
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToATXSendMessagesToDigestSuggestion:(id)a0;

@end
