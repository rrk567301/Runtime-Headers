@class NSString;

@interface CMLClientConfig : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, copy, nonatomic) NSString *sourceApplicationBundleIdentifier;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUseCase:(id)a0;
- (id)initWithUseCase:(id)a0 sourceApplicationBundleIdentifier:(id)a1;
- (char)isEqualToClientConfig:(id)a0;

@end
