@class NSDictionary;

@interface ATXMessageContextResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int messageSenderImportance;
@property (readonly, nonatomic) double importanceConfidenceScore;
@property (readonly, nonatomic) NSDictionary *messageFeatureDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageSenderImportance:(int)a0 importanceConfidenceScore:(double)a1 messageFeatureDictionary:(id)a2;

@end
