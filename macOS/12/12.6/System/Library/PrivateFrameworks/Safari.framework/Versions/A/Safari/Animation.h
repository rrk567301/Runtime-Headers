@interface Animation : NSAnimation {
    id /* block */ _progressHandler;
}

- (void).cxx_destruct;
- (void)setCurrentProgress:(float)a0;
- (id)initWithDuration:(double)a0 animationCurve:(unsigned long long)a1 progressHandler:(id /* block */)a2;

@end
