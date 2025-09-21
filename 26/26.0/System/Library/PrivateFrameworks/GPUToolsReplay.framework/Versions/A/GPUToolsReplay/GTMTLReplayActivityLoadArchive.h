@class NSString;

@interface GTMTLReplayActivityLoadArchive : GTMTLReplayActivity {
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonObject;
- (void).cxx_destruct;
- (void)outputToLog:(id)a0;

@end
