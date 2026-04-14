@class NSString;

@interface IFMakeTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
}

- (long long)run;
- (void)dealloc;
- (id)description;
- (id)initWithPath:(id)a0;
- (id)logDescription;
- (BOOL)createDirectory:(id)a0 withPermissions:(id)a1 eraseExisting:(BOOL)a2;

@end
