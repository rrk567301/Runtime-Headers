@interface SwiftUI.ViewGraphHostEnvironmentWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ phase;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
