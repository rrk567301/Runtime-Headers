@class SGRecordId, SGOrigin;

@interface SGObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, nonatomic) SGOrigin *origin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSuggestion:(id)a0;
- (id)initWithRecordId:(id)a0 origin:(id)a1;

@end
