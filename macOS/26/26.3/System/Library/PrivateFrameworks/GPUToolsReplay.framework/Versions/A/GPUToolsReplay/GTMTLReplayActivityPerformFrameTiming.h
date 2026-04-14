@interface GTMTLReplayActivityPerformFrameTiming : GTMTLReplayActivity {
    int _index;
}

- (id)jsonObject;
- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIndex:(int)a0;
- (unsigned int)messageSerial;
- (void)outputToLog:(id)a0;

@end
