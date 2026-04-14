@class NSString;

@interface IFMakeTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
}

- (id)initWithPath:(id)a0;
- (long long)run;
- (id)logDescription;
- (id)description;
- (void)dealloc;
- (BOOL)createDirectory:(id)a0 withPermissions:(id)a1 eraseExisting:(BOOL)a2;

@end
