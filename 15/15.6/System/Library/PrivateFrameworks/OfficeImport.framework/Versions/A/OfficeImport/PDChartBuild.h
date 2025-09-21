@interface PDChartBuild : PDBuild {
    int mChartBuildType;
}

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (id)initWithBuildType:(int)a0;

@end
