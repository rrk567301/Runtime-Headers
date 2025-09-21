@interface PHASESharedListener : PHASEListener

@property (nonatomic) long long updateMode;

- (void)dealloc;
- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setGain:(double)a0;
- (id)initWithEngine:(id)a0;
- (id)initInternalWithEngine:(id)a0;
- (id)initWithEngine:(id)a0 entityType:(unsigned int)a1;
- (BOOL)isConnectedToRoot;
- (void)setAutomaticHeadTrackingFlags:(unsigned long long)a0;

@end
