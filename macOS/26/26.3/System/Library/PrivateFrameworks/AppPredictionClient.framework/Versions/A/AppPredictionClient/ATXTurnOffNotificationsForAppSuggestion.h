@interface ATXTurnOffNotificationsForAppSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqualToATXTurnOffNotificationsForAppSuggestion:(id)a0;
- (id)jsonRawData;
- (id)description;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)feedbackKeyComponent;
- (void)encodeWithCoder:(id)a0;

@end
