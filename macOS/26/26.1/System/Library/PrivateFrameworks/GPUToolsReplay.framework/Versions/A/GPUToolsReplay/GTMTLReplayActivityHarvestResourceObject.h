@class NSDictionary;

@interface GTMTLReplayActivityHarvestResourceObject : GTMTLReplayActivity {
    NSDictionary *_attributes;
}

- (id)initWithAttributes:(id)a0;
- (id)summary;
- (void).cxx_destruct;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)outputToLog:(id)a0;

@end
