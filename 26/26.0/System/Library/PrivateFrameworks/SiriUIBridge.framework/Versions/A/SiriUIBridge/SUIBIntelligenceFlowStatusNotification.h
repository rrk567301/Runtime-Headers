@class NSString;

@interface SUIBIntelligenceFlowStatusNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *statusString;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
