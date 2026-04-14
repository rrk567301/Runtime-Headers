@class NSURL, NSData;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *remoteURL;
@property (retain, nonatomic) NSData *cachedData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDirectory;
- (BOOL)isSymbolicLink;
- (id)fileAttributes;
- (id)preferredFilename;
- (id)filename;
- (BOOL)matchesContentsOfURL:(id)a0;
- (BOOL)readFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;
- (id)serializedRepresentation;
- (id)addFileWrapper:(id)a0;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (void)removeFileWrapper:(id)a0;
- (id)fileWrappers;
- (id)keyForFileWrapper:(id)a0;
- (id)regularFileContents;
- (id)symbolicLinkDestinationURL;
- (id)dataWithError:(id *)a0;
- (id)initWithRemoteURL:(id)a0;

@end
