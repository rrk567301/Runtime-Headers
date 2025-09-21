@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *changes;
@property (readonly, nonatomic) char changesTruncated;

+ (id)contactNameRecordChangeResultWithChanges:(id)a0 changesTruncated:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChanges:(id)a0 changesTruncated:(char)a1;
- (char)isEqualToContactNameRecordChangeResult:(id)a0;

@end
