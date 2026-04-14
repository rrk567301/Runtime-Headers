@class NSSet;

@interface WFMigratedHealthKitResourceState : NSObject <NSSecureCoding> {
    NSSet *entries;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
