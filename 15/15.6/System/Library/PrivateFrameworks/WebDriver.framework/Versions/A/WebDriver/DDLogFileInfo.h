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
@property (nonatomic) char isArchived;

+ (id)logFileWithPath:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)fileAttributes;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)modificationDate;
- (id)creationDate;
- (double)age;
- (char)isArchived;
- (id)initWithFilePath:(id)a0;
- (void)addExtendedAttributeWithName:(id)a0;
- (char)hasExtendedAttributeWithName:(id)a0;
- (void)removeExtendedAttributeWithName:(id)a0;
- (void)renameFile:(id)a0;
- (long long)reverseCompareByCreationDate:(id)a0;
- (long long)reverseCompareByModificationDate:(id)a0;
- (void)setIsArchived:(char)a0;

@end
