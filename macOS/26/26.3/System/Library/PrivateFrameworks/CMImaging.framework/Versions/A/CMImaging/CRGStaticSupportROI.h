@class NSString;

@interface CRGStaticSupportROI : NSObject <CRGROI>

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ p0; void /* unknown type, empty encoding */ p1; } support;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)left:(int)a0 right:(int)a1 top:(int)a2 bottom:(int)a3;
+ (id)symmetricBorder:(SEL)a0;

- (id)initWithSupport:(struct { })a0;
- (struct { })resolveForOutputRect:(struct { })a0 withInfo:(const struct { } *)a1;

@end
