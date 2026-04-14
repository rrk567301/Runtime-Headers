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
- (id)initWithFilePath:(id)a0;
- (unsigned long long)fileSize;
- (void)reset;
- (double)age;
- (id)modificationDate;
- (id)description;
- (BOOL)isArchived;
- (id)creationDate;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fileAttributes;
- (void)addExtendedAttributeWithName:(id)a0;
- (BOOL)hasExtendedAttributeWithName:(id)a0;
- (void)removeExtendedAttributeWithName:(id)a0;
- (void)renameFile:(id)a0;
- (long long)reverseCompareByCreationDate:(id)a0;
- (long long)reverseCompareByModificationDate:(id)a0;
- (void)setIsArchived:(BOOL)a0;

@end
