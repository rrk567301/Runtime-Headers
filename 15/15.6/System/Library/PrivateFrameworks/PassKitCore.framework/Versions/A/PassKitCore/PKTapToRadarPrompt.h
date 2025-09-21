@class NSString, NSDate;

@interface PKTapToRadarPrompt : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDate *lastPromptDate;
@property (nonatomic) long long promptCount;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
