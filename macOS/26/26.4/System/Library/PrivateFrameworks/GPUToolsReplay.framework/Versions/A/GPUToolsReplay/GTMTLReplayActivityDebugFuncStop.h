@interface GTMTLReplayActivityDebugFuncStop : GTMTLReplayActivity {
    struct { unsigned int function; unsigned int subCommand; } _currentIndex;
    struct { unsigned int function; unsigned int subCommand; } _targetIndex;
}

- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)summary;
- (id)initWithCurrentIndex:(struct { unsigned int x0; unsigned int x1; })a0 targetIndex:(struct { unsigned int x0; unsigned int x1; })a1;
- (void)outputToLog:(id)a0;

@end
