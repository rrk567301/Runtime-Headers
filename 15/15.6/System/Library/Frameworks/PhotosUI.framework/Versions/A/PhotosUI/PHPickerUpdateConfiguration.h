@interface PHPickerUpdateConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char _didSetEdgesWithoutContentMargins;
@property (readonly, nonatomic) char _didSetSelectionLimit;
@property (readonly, nonatomic) char _didSetMinimumSelectionLimit;
@property (readonly, nonatomic) char _isValidConfiguration;
@property (nonatomic) long long minimumSelectionLimit;
@property (nonatomic) long long selectionLimit;
@property (nonatomic) unsigned long long edgesWithoutContentMargins;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
