@class NSString;

@interface DualMaskLayoutManager : NSObject <CALayoutManager>

@property (nonatomic) double maskWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)initWithMaskWidth:(double)a0;

@end
