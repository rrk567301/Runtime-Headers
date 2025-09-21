@class NSString;

@interface BSCornerRadiusConfiguration : NSObject <BSXPCAutoCoding, NSCopying>

@property (readonly, nonatomic) BOOL isCongruent;
@property (readonly, nonatomic) double topLeft;
@property (readonly, nonatomic) double bottomLeft;
@property (readonly, nonatomic) double bottomRight;
@property (readonly, nonatomic) double topRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCornerRadius:(double)a0;
- (id)initWithTopLeft:(double)a0 bottomLeft:(double)a1 bottomRight:(double)a2 topRight:(double)a3;
- (id)membersForCoder;
- (BOOL)isEqual:(id)a0;

@end
