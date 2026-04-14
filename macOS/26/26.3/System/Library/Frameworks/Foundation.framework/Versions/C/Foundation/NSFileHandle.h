@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long offsetInFile;
@property (readonly, copy) NSData *availableData;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)fileHandleForReadingFromURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForUpdatingURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForReadingAtPath:(id)a0;
+ (id)fileHandleForReadingFromURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleForUpdatingAtPath:(id)a0;
+ (id)fileHandleForUpdatingURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleForWritingAtPath:(id)a0;
+ (id)fileHandleForWritingToURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForWritingToURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;

- (id)readDataToEndOfFile;
- (unsigned long long)seekToEndOfFile;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (void)synchronizeFile;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)writeData:(id)a0;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (id /* block */)writeabilityHandler;
- (int)fileDescriptor;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)closeFile;
- (BOOL)closeAndReturnError:(out id *)a0;
- (void)setReadabilityHandler:(id /* block */)a0;
- (void)seekToFileOffset:(unsigned long long)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id)initWithFileDescriptor:(int)a0;
- (id /* block */)readabilityHandler;
- (Class)classForCoder;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (void)_closeOnDealloc;
- (id)initWithPath:(id)a0 flags:(long long)a1 createMode:(long long)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 flags:(long long)a1 createMode:(long long)a2 error:(id *)a3;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (id)initWithFileDescriptor:(int)a0 closeOnDealloc:(BOOL)a1;
- (id)initWithPath:(id)a0 flags:(long long)a1 createMode:(long long)a2 error:(id *)a3;
- (void)encodeWithCoder:(id)a0;

@end
