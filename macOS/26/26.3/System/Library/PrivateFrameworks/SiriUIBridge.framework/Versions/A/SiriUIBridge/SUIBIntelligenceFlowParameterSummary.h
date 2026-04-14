@class NSString;

@interface SUIBIntelligenceFlowParameterSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) unsigned long long valueType;

- (id)initWithBuilder:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
