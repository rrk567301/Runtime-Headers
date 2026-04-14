@class NSString;

@interface SUIBIntelligenceFlowParameterSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) unsigned long long valueType;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
