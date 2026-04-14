@class NSString;

@interface IFMakeTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
}

- (id)initWithPath:(id)a0;
- (id)logDescription;
- (void)dealloc;
- (long long)run;
- (id)description;
- (BOOL)createDirectory:(id)a0 withPermissions:(id)a1 eraseExisting:(BOOL)a2;

@end
