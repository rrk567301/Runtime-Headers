@class NSDate;

@interface ATXNotificationSmartPauseSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *suggestionExpiration;
@property (nonatomic) double suggestionDuration;

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
- (void).cxx_destruct;
- (id)initWithSuggestionExpiration:(id)a0 pauseDuration:(double)a1;
- (BOOL)isEqualToATXNotificationSmartPauseSuggestion:(id)a0;

@end
