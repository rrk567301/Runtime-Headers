@class NSString;

@interface ModelCatalog.GuardrailResultWrapper : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ guardrailResult;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
