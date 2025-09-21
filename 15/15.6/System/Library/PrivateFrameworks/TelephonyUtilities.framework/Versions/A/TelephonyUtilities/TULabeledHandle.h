@class NSString, TUHandle;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) char isSuggested;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0 label:(id)a1 isSuggested:(char)a2;
- (char)isEqualToLabeledHandle:(id)a0;

@end
