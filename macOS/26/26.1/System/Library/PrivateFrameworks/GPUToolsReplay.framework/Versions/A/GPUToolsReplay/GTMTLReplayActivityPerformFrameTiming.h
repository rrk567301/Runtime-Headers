@interface GTMTLReplayActivityPerformFrameTiming : GTMTLReplayActivity {
    int _index;
}

- (id)summary;
- (id)initWithIndex:(int)a0;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
