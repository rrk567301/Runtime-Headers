@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (int)type;
- (id)initWithBuildType:(int)a0;

@end
