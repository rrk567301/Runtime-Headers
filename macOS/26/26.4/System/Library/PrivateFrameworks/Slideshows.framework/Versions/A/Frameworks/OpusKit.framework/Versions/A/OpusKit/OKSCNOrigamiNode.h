@class OKSCNOrigamiGeometry;

@interface OKSCNOrigamiNode : SCNNode {
    OKSCNOrigamiGeometry *_origamiGeometry;
}

@property (nonatomic) double foldingAmount;
@property (readonly, nonatomic) unsigned long long state;

+ (id)nodeWithSize:(double)a0;

- (void)open;
- (void)close;
- (void)dealloc;
- (void)toggle;
- (void)setBackContents:(id)a0;
- (void)setFrontContents:(id)a0;
- (void)updateFoldingRendering;

@end
