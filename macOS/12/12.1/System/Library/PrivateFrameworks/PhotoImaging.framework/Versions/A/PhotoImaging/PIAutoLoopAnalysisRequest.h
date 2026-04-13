@interface PIAutoLoopAnalysisRequest : NURenderRequest

@property (nonatomic) long long flavor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
