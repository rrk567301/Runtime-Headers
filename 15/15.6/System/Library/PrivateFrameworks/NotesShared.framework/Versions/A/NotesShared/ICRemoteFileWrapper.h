@class NSURL, NSData;

@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *remoteURL;
@property (retain, nonatomic) NSData *cachedData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isDirectory;
- (char)isSymbolicLink;
- (id)addFileWrapper:(id)a0;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (id)fileAttributes;
- (id)fileWrappers;
- (id)filename;
- (id)keyForFileWrapper:(id)a0;
- (char)matchesContentsOfURL:(id)a0;
- (id)preferredFilename;
- (char)readFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)regularFileContents;
- (void)removeFileWrapper:(id)a0;
- (id)serializedRepresentation;
- (id)symbolicLinkDestinationURL;
- (char)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;
- (id)dataWithError:(id *)a0;
- (id)initWithRemoteURL:(id)a0;

@end
