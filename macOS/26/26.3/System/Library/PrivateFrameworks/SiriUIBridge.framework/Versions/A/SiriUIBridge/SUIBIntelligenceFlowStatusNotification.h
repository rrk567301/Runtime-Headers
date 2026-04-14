@class NSString;

@interface SUIBIntelligenceFlowStatusNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *statusString;

- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
