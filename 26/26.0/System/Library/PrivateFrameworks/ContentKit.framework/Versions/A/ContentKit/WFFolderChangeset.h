@class NSArray, WFFileRepresentation;

@interface WFFolderChangeset : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFFileRepresentation *rootFolder;
@property (retain, nonatomic) NSArray *addedFiles;
@property (retain, nonatomic) NSArray *modifiedFiles;
@property (retain, nonatomic) NSArray *removedFilePaths;

+ (id)decodeFileReferenceURLsForKey:(id)a0 coder:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)wfName;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootFolder:(id)a0 addedFiles:(id)a1 modifiedFiles:(id)a2 removedFilePaths:(id)a3;

@end
