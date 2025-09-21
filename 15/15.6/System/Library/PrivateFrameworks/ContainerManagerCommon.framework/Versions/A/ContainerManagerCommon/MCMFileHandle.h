@class NSError, NSString, NSNumber;
@protocol MCMFileHandle_Private;

@interface MCMFileHandle : NSObject <MCMFileHandle_Private, MCMFileHandle>

@property (retain, nonatomic) id<MCMFileHandle_Private> relativeToFileHandle;
@property (retain, nonatomic) NSError *openError;
@property (nonatomic, getter=isOpen) char open;
@property (readonly, nonatomic) int flags;
@property (nonatomic) char invalid;
@property (nonatomic) int fd;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) unsigned long long symlinks;
@property (readonly, nonatomic) char openLazily;
@property (readonly, nonatomic) unsigned short createMode;
@property (readonly, nonatomic) NSNumber *createDPClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)compareDataProtectionClassTarget:(id)a0 withExisting:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (char)openWithError:(id *)a0;
- (id)copyValueAsUUIDFromXattr:(id)a0 error:(id *)a1;
- (int)_computeFlags;
- (unsigned short)_computeMode;
- (int)_openAbsolute;
- (int)_openRelative;
- (char)checkAppContainerProtection:(char *)a0 error:(id *)a1;
- (id)copyValueAsNumberFromXattr:(id)a0 error:(id *)a1;
- (id)copyValueAsStringFromXattr:(id)a0 maxLength:(unsigned long long)a1 error:(id *)a2;
- (char)expectOpenWithError:(id *)a0;
- (id)initWithPath:(id)a0 relativeToFileHandle:(id)a1 direction:(unsigned long long)a2 symlinks:(unsigned long long)a3 createMode:(unsigned short)a4 createDPClass:(id)a5 openLazily:(char)a6;
- (char)registerAppContainerForProtectionWithError:(id *)a0;
- (char)removeXattr:(id)a0 error:(id *)a1;
- (char)setPermissions:(unsigned short)a0 andOwner:(id)a1 error:(id *)a2;
- (char)setXattr:(id)a0 valueAsNumber:(id)a1 error:(id *)a2;
- (char)setXattr:(id)a0 valueAsString:(id)a1 error:(id *)a2;
- (char)setXattr:(id)a0 valueAsUUID:(id)a1 error:(id *)a2;
- (char)withOpenFileDoBlock:(id /* block */)a0;

@end
