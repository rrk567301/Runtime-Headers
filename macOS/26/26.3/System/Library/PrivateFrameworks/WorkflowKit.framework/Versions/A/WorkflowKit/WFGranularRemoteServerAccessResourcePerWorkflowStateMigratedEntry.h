@class NSNumber, NSString;

@interface WFGranularRemoteServerAccessResourcePerWorkflowStateMigratedEntry : NSObject <NSSecureCoding> {
    NSNumber *authorized;
    NSString *host;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
