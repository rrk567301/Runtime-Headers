@interface GTMTLReplayActivityRestoreCommandBuffer : GTMTLReplayActivity {
    unsigned int _functionIndex;
}

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonObject;
- (id)initWithIndex:(unsigned int)a0;
- (void)outputToLog:(id)a0;

@end
