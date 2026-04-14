@class NSString, NSDictionary, NSDate;

@interface DDLogFileInfo : NSObject {
    NSString *fileName;
    NSDictionary *fileAttributes;
    NSDate *creationDate;
    NSDate *modificationDate;
    unsigned long long fileSize;
}

@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSDictionary *fileAttributes;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) double age;
@property (nonatomic) BOOL isArchived;

+ (id)logFileWithPath:(id)a0;

- (id)fileName;
- (double)age;
- (id)creationDate;
- (BOOL)isEqual:(id)a0;
- (id)modificationDate;
- (void).cxx_destruct;
- (unsigned long long)fileSize;
- (void)reset;
- (id)initWithFilePath:(id)a0;
- (id)description;
- (BOOL)isArchived;
- (id)fileAttributes;
- (void)addExtendedAttributeWithName:(id)a0;
- (BOOL)hasExtendedAttributeWithName:(id)a0;
- (void)removeExtendedAttributeWithName:(id)a0;
- (void)renameFile:(id)a0;
- (long long)reverseCompareByCreationDate:(id)a0;
- (long long)reverseCompareByModificationDate:(id)a0;
- (void)setIsArchived:(BOOL)a0;

@end
