@interface GTMTLReplayActivityDisplayAttachment : GTMTLReplayActivity {
    struct { unsigned int function; unsigned int subCommand; } _currentIndex;
}

- (id)summary;
- (id)initWithIndex:(struct { unsigned int x0; unsigned int x1; })a0;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)outputToLog:(id)a0;

@end
