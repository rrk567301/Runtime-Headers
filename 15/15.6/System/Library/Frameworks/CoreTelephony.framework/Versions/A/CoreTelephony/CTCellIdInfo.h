@class NSNumber;

@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *cellId;
@property (readonly, nonatomic) NSNumber *baseId;

+ (id)cellIdInfoFromCellId:(unsigned long long)a0 baseId:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
