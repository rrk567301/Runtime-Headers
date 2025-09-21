@class SGRecordId, SGOrigin;

@interface SGObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, nonatomic) SGOrigin *origin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToSuggestion:(id)a0;
- (id)initWithRecordId:(id)a0 origin:(id)a1;

@end
