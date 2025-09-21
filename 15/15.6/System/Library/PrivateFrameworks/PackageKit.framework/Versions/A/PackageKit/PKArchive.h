@class NSArray, NSString, NSData, NSDate;

@interface PKArchive : NSObject

@property (readonly) NSArray *archiveSignatures;
@property (readonly) NSDate *archiveSignatureDate;
@property (readonly) NSString *archivePath;
@property (readonly) NSData *archiveDigestData;
@property (readonly) NSString *archiveDigest;

+ (id)archiveWithPath:(id)a0;
+ (id)_allArchiveClasses;
+ (id)archiveWithPath:(id)a0 options:(id)a1;

- (id)description;
- (id)enumeratorAtPath:(id)a0;
- (char)fileExistsAtPath:(id)a0;
- (char)closeArchive;
- (id)dataForPath:(id)a0;
- (char)extractItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)initForReadingFromPath:(id)a0 options:(id)a1;
- (char)_extractFile:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)computedArchiveDigestWithAlgorithm:(id)a0;
- (id)fileAttributesAtPath:(id)a0;
- (id)initForReadingFromPath:(id)a0;
- (char)verifyReturningError:(id *)a0;

@end
