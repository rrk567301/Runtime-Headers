@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (void)setType:(int)a0;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBuildType:(int)a0;

@end
