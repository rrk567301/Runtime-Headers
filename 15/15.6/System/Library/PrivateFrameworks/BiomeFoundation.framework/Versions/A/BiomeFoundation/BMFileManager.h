@class NSString, BMCache;
@protocol BMFileManagerDelegate;

@interface BMFileManager : NSObject <BMFileManagerImpl> {
    long long _cachingOptions;
    BMCache *_fileHandleCache;
}

@property (readonly, nonatomic) NSString *directory;
@property (weak, nonatomic) id<BMFileManagerDelegate> delegate;

+ (id)fileManagerWithDirectAccessToDirectory:(id)a0 cachingOptions:(long long)a1;
+ (id)fileManagerWithMediatedAccessToDirectory:(id)a0 useCase:(id)a1 domain:(unsigned long long)a2 user:(unsigned int)a3;
+ (id)globalWeakFileHandleCache;

- (id)init;
- (void).cxx_destruct;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (char)createDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)_fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (char)_removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (char)_removeFileAtPath:(id)a0 error:(id *)a1;
- (char)acquireLockfile:(id)a0 andRunBlock:(id /* block */)a1;
- (char)changePermissionsOfFileAtPath:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
- (id)dataWithContentsOfFileAtPath:(id)a0 error:(id *)a1;
- (char)fileExistsAtPath:(id)a0 error:(id *)a1;
- (id)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (id)initWithDirectory:(id)a0 cachingOptions:(long long)a1;
- (unsigned long long)modificationTimeOfFileAtPath:(id)a0 error:(id *)a1;
- (char)removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (char)removeFileAtPath:(id)a0 error:(id *)a1;
- (char)replaceFileAtPath:(id)a0 withData:(id)a1 protection:(int)a2 flags:(int)a3 error:(id *)a4;
- (id)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 protection:(int)a2 flags:(int)a3 error:(id *)a4;
- (unsigned long long)sizeOfFileAtPath:(id)a0 error:(id *)a1;
- (id)temporaryFileHandleWithProtection:(int)a0 error:(id *)a1;

@end
