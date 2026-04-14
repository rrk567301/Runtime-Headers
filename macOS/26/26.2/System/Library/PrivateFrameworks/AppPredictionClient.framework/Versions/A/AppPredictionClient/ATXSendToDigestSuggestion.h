@interface ATXSendToDigestSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)jsonRawData;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)description;
- (id)feedbackKeyComponent;
- (id)encodeAsProto;
- (id)init;
- (BOOL)isEqualToATXSendToDigestSuggestion:(id)a0;

@end
