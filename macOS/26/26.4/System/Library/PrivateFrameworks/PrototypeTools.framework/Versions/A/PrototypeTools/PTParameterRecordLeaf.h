@class NSString;

@interface PTParameterRecordLeaf : NSObject <NSCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recordClassName;
@property (copy, nonatomic) id changedValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordClassName:(id)a0 value:(id)a1;

@end
