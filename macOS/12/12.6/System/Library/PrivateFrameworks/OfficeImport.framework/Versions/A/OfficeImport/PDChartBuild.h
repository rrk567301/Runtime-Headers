@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)type;
- (void)setType:(int)a0;
- (id)initWithBuildType:(int)a0;

@end
