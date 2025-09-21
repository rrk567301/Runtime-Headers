@class NSDate;

@interface CPLLibraryState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isDisabled) char disabled;
@property (copy, nonatomic) NSDate *disabledDate;
@property (copy, nonatomic) NSDate *deleteDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;

@end
