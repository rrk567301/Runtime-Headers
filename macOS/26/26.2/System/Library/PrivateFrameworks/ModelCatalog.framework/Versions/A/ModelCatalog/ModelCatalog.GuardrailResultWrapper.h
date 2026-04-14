@class NSString;

@interface ModelCatalog.GuardrailResultWrapper : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ guardrailResult;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;

@end
