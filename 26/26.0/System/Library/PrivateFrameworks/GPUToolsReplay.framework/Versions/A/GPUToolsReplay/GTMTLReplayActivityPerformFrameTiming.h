@interface GTMTLReplayActivityPerformFrameTiming : GTMTLReplayActivity {
    int _index;
}

- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonObject;
- (id)initWithIndex:(int)a0;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
