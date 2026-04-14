@class NSString;

@interface ModelCatalog.SafetyFailureWrapper : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ safetyFailure;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end
