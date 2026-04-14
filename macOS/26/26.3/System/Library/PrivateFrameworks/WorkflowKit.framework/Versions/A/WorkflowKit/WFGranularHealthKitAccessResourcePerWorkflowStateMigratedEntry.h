@class NSNumber;

@interface WFGranularHealthKitAccessResourcePerWorkflowStateMigratedEntry : NSObject <NSSecureCoding> {
    NSNumber *authorized;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
