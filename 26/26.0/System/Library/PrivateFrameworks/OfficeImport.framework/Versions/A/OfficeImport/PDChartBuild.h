@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (int)type;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithBuildType:(int)a0;

@end
