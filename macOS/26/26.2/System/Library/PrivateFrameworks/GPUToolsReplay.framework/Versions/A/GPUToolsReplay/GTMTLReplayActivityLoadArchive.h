@class NSString;

@interface GTMTLReplayActivityLoadArchive : GTMTLReplayActivity {
    NSString *_path;
}

- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (id)summary;
- (void)outputToLog:(id)a0;

@end
