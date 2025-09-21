@class NSDictionary;

@interface GTMTLReplayActivityHarvestResourceObject : GTMTLReplayActivity {
    NSDictionary *_attributes;
}

- (id)initWithAttributes:(id)a0;
- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonObject;
- (void).cxx_destruct;
- (void)outputToLog:(id)a0;

@end
