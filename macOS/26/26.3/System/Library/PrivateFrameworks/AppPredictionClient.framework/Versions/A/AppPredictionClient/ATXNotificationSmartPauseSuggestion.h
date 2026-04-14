@class NSDate;

@interface ATXNotificationSmartPauseSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *suggestionExpiration;
@property (nonatomic) double suggestionDuration;

- (id)description;
- (id)init;
- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)feedbackKeyComponent;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSuggestionExpiration:(id)a0 pauseDuration:(double)a1;
- (BOOL)isEqualToATXNotificationSmartPauseSuggestion:(id)a0;

@end
