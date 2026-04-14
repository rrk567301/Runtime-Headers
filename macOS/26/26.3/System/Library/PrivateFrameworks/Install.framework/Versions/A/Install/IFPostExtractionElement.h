@interface IFPostExtractionElement : IFInstallQueueElement {
    int _installKey;
}

- (id)initWithKey:(int)a0;
- (long long)run;
- (id)description;
- (id)logDescription;

@end
