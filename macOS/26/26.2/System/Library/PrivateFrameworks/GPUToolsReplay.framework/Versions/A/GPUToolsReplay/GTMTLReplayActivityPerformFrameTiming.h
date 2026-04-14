@interface GTMTLReplayActivityPerformFrameTiming : GTMTLReplayActivity {
    int _index;
}

- (id)initWithIndex:(int)a0;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)summary;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
