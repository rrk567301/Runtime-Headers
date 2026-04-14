@class NSString;

@interface IFMakeTempDirsElement : IFInstallQueueElement {
    NSString *_tempPath;
}

- (long long)run;
- (id)logDescription;
- (id)description;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (BOOL)createDirectory:(id)a0 withPermissions:(id)a1 eraseExisting:(BOOL)a2;

@end
