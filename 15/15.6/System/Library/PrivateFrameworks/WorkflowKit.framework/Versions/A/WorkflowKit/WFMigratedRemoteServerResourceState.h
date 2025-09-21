@class NSSet;

@interface WFMigratedRemoteServerResourceState : NSObject <NSSecureCoding> {
    NSSet *entries;
}

@property (class, readonly) char supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
