@class NSString;

@interface PTParameterRecordLeaf : NSObject <NSCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recordClassName;
@property (copy, nonatomic) id changedValue;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRecordClassName:(id)a0 value:(id)a1;

@end
