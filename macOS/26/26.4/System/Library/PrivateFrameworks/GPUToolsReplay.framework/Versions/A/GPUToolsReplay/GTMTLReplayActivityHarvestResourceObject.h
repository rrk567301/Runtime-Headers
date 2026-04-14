@class NSDictionary;

@interface GTMTLReplayActivityHarvestResourceObject : GTMTLReplayActivity {
    NSDictionary *_attributes;
}

- (id)initWithAttributes:(id)a0;
- (id)jsonObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)summary;
- (void)outputToLog:(id)a0;

@end
