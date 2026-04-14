@interface SGRecordId : NSObject <NSCopying, NSSecureCoding> {
    long long _internalEntityId;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)recordIdWithNumericValue:(long long)a0;
+ (id)recordIdWithInternalEntityId:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)numericValue;
- (long long)internalEntityId;
- (BOOL)isEqualToRecordId:(id)a0;
- (id)initWithInternalEntityId:(long long)a0;

@end
