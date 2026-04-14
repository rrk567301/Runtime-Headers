@class NSString, NSDictionary;

@interface SUIBIntelligenceFlowActionSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *formatString;
@property (readonly, copy, nonatomic) NSDictionary *parameterSummaries;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)init;
- (id)parameterMatches;

@end
