@interface IFPostExtractionElement : IFInstallQueueElement {
    int _installKey;
}

- (id)logDescription;
- (long long)run;
- (id)description;
- (id)initWithKey:(int)a0;

@end
