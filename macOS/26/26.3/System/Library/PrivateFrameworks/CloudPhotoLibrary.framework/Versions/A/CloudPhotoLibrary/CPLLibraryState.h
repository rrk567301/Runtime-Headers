@class NSDate;

@interface CPLLibraryState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (copy, nonatomic) NSDate *disabledDate;
@property (copy, nonatomic) NSDate *deleteDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
