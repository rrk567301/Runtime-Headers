@class NSString;

@interface CMLClientConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *useCase;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithUseCase:(id)a0;
- (id)initWithUseCase:(id)a0 sourceApplicationBundleIdentifier:(id)a1;
- (BOOL)isEqualToClientConfig:(id)a0;

@end
