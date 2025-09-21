@class NSString, CXHandle;

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CXHandle *handle;
@property (copy, nonatomic) NSString *label;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToLabeledHandle:(id)a0;
- (id)initWithHandle:(id)a0 label:(id)a1;

@end
