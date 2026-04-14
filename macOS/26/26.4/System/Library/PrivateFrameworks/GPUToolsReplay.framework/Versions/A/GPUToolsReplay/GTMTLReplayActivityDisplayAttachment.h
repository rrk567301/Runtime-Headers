@interface GTMTLReplayActivityDisplayAttachment : GTMTLReplayActivity {
    struct { unsigned int function; unsigned int subCommand; } _currentIndex;
}

- (id)initWithIndex:(struct { unsigned int x0; unsigned int x1; })a0;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)summary;
- (void)outputToLog:(id)a0;

@end
