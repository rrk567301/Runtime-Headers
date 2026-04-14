@class NSString;

@interface GTMTLReplayActivityLoadArchive : GTMTLReplayActivity {
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (id)jsonObject;
- (id)summary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)outputToLog:(id)a0;

@end
