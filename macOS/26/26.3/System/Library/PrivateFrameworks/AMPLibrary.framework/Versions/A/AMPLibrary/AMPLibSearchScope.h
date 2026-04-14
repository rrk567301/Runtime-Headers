@class AMPLibModelKind;

@interface AMPLibSearchScope : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMPLibModelKind *libModelKind;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithModelKind:(id)a0;

@end
