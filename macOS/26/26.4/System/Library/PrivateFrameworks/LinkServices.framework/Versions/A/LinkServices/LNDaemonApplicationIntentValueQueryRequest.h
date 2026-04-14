@class LNValueType;

@interface LNDaemonApplicationIntentValueQueryRequest : LNDaemonApplicationRequest <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNValueType *inputValueType;
@property (readonly, copy, nonatomic) LNValueType *resultValueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithInputValueType:(id)a0 resultValueType:(id)a1 bundleIdentifier:(id)a2 frameworkBundles:(id)a3;

@end
