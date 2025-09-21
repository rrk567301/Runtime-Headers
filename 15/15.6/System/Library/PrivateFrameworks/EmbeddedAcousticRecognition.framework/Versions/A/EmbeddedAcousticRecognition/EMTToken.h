@class NSString;

@interface EMTToken : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) char precededBySpace;
@property (readonly, nonatomic) char followedBySpace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 confidence:(float)a1 precededBySpace:(char)a2 followedBySpace:(char)a3;
- (id)initWithText:(id)a0 confidence:(float)a1 score:(float)a2 precededBySpace:(char)a3 followedBySpace:(char)a4;

@end
