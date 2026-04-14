@interface GTMTLReplayActivityRestoreCommandBuffer : GTMTLReplayActivity {
    unsigned int _functionIndex;
}

- (id)initWithIndex:(unsigned int)a0;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)summary;
- (void)outputToLog:(id)a0;

@end
