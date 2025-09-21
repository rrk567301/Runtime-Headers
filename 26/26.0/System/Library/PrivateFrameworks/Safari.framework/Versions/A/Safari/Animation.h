@interface Animation : NSAnimation {
    id /* block */ _progressHandler;
}

- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (id)initWithDuration:(double)a0 animationCurve:(unsigned long long)a1 progressHandler:(id /* block */)a2;

@end
