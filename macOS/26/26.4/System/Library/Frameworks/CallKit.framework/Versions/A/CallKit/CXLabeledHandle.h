@class NSString, CXHandle;

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CXHandle *handle;
@property (copy, nonatomic) NSString *label;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToLabeledHandle:(id)a0;
- (id)initWithHandle:(id)a0 label:(id)a1;

@end
