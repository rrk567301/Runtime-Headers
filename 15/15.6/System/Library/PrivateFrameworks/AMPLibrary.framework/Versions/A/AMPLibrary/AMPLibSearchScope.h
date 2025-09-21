@class AMPLibModelKind;

@interface AMPLibSearchScope : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) AMPLibModelKind *libModelKind;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModelKind:(id)a0;

@end
