@interface IFPostExtractionElement : IFInstallQueueElement {
    int _installKey;
}

- (long long)run;
- (id)description;
- (id)initWithKey:(int)a0;
- (id)logDescription;

@end
