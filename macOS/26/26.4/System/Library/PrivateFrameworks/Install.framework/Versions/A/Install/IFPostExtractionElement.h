@interface IFPostExtractionElement : IFInstallQueueElement {
    int _installKey;
}

- (id)initWithKey:(int)a0;
- (long long)run;
- (id)logDescription;
- (id)description;

@end
