@class NSString;

@interface IFRemoveTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
    int _installKey;
}

- (long long)run;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)initWithPath:(id)a0 installKey:(int)a1;

@end
