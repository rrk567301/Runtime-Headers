@interface AARotationMode : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mode;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0 namespaceName:(id)a1 startDate:(id)a2 cachedRotations:(long long)a3 resetCount:(long long)a4 lastRotation:(id)a5;

@end
