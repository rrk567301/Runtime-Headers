@class NSString;

@interface IFRemoveTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
    int _installKey;
}

- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)description;
- (id)initWithPath:(id)a0 installKey:(int)a1;

@end
