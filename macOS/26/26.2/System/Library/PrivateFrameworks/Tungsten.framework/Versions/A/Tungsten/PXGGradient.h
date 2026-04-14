@class NSColor;

@interface PXGGradient : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSColor *startingColor;
@property (readonly, copy, nonatomic) NSColor *endingColor;
@property (readonly, nonatomic) long long direction;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithStartingColor:(id)a0 endingColor:(id)a1 direction:(long long)a2;

@end
