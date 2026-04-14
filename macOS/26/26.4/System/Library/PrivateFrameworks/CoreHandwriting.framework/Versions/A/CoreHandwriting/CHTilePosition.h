@class NSIndexPath;

@interface CHTilePosition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long row;
@property (readonly, nonatomic) long long column;
@property (readonly, nonatomic) NSIndexPath *subtileIndex;

+ (id)tilePositionWithRow:(long long)a0 column:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRow:(long long)a0 column:(long long)a1;
- (id)initWithRow:(long long)a0 column:(long long)a1 subtileIndex:(id)a2;

@end
