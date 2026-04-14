@interface GTMTLReplayActivityRestoreCommandBuffer : GTMTLReplayActivity {
    unsigned int _functionIndex;
}

- (id)summary;
- (id)initWithIndex:(unsigned int)a0;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)outputToLog:(id)a0;

@end
