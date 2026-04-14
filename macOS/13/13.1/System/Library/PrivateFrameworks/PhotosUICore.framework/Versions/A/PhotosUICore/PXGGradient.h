@class NSColor;

@interface PXGGradient : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSColor *startingColor;
@property (readonly, copy, nonatomic) NSColor *endingColor;
@property (readonly, nonatomic) long long direction;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithStartingColor:(id)a0 endingColor:(id)a1 direction:(long long)a2;

@end
