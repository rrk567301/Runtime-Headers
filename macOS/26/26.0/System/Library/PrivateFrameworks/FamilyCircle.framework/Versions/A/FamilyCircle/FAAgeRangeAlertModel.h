@class FAAgeRangeResponse, NSString;

@interface FAAgeRangeAlertModel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) FAAgeRangeResponse *ageRangeResponse;
@property (readonly, nonatomic) BOOL shouldPrompt;
@property (readonly, nonatomic) long long flowType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *primaryButtonText;
@property (readonly, nonatomic) NSString *secondaryButtonText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAgeRangeResponse:(id)a0 shouldPrompt:(BOOL)a1 flowType:(long long)a2 title:(id)a3 message:(id)a4 primaryButtonText:(id)a5 secondaryButtonText:(id)a6;

@end
