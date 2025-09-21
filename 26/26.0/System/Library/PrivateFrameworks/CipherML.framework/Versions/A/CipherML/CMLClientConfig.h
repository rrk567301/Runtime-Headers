@class NSString;

@interface CMLClientConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *useCase;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUseCase:(id)a0;
- (id)initWithUseCase:(id)a0 sourceApplicationBundleIdentifier:(id)a1;
- (BOOL)isEqualToClientConfig:(id)a0;

@end
