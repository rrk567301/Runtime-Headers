@interface AARotationMode : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mode;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMode:(long long)a0 namespaceName:(id)a1 startDate:(id)a2 cachedRotations:(long long)a3 resetCount:(long long)a4 lastRotation:(id)a5;

@end
