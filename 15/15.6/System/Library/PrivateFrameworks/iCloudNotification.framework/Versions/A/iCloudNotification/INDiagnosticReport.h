@class NSString, NSArray, NSDate;

@interface INDiagnosticReport : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *pushEnvironment;
@property (copy, nonatomic) NSString *pushToken;
@property (copy, nonatomic) NSArray *pushTopics;
@property (copy, nonatomic) NSDate *nextHeartbeatDate;
@property (nonatomic) char disabled;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
