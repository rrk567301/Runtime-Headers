@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long offsetInFile;
@property (readonly, copy) NSData *availableData;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)fileHandleForReadingFromURL:(id)a0 error:(id *)a1;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleForReadingAtPath:(id)a0;
+ (id)fileHandleForWritingAtPath:(id)a0;
+ (id)fileHandleForUpdatingAtPath:(id)a0;
+ (id)fileHandleForWritingToURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForUpdatingURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForReadingFromURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleForWritingToURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleForUpdatingURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (int)fileDescriptor;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (void)writeData:(id)a0;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)a0;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (void)synchronizeFile;
- (void)closeFile;
- (id)initWithPath:(id)a0 flags:(long long)a1 createMode:(long long)a2;
- (id)initWithFileDescriptor:(int)a0 closeOnDealloc:(BOOL)a1;
- (id)initWithFileDescriptor:(int)a0;
- (id)initWithURL:(id)a0 flags:(long long)a1 createMode:(long long)a2 error:(id *)a3;
- (id)initWithPath:(id)a0 flags:(long long)a1 createMode:(long long)a2 error:(id *)a3;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (BOOL)closeAndReturnError:(out id *)a0;
- (id /* block */)writeabilityHandler;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id /* block */)readabilityHandler;
- (void)setReadabilityHandler:(id /* block */)a0;
- (void)_closeOnDealloc;

@end
