@class NSString;

@interface EMTProjection : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
