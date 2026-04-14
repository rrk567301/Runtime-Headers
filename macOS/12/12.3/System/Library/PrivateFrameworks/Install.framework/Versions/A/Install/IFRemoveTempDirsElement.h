@class NSString;

@interface IFRemoveTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
    int _installKey;
}

- (long long)run;
- (void)dealloc;
- (id)description;
- (id)logDescription;
- (id)initWithPath:(id)a0 installKey:(int)a1;

@end
