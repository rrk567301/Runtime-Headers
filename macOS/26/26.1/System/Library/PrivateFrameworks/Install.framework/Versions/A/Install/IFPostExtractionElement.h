@interface IFPostExtractionElement : IFInstallQueueElement {
    int _installKey;
}

- (long long)run;
- (id)initWithKey:(int)a0;
- (id)logDescription;
- (id)description;

@end
