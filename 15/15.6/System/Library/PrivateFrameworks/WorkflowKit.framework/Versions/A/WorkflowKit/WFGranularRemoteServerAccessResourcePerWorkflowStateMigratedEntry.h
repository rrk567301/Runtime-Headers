@class NSNumber, NSString;

@interface WFGranularRemoteServerAccessResourcePerWorkflowStateMigratedEntry : NSObject <NSSecureCoding> {
    NSNumber *authorized;
    NSString *host;
}

@property (class, readonly) char supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
