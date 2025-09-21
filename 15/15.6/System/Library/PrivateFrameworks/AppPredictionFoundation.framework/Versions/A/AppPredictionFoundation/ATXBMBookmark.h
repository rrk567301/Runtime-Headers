@class NSURL, NSNumber, NSDictionary;
@protocol BMBookmark;

@interface ATXBMBookmark : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSURL *urlPath;
@property (readonly, nonatomic) NSNumber *versionNumber;
@property (retain, nonatomic) id<BMBookmark> bookmark;
@property (retain, nonatomic) NSDictionary *metadata;

+ (char)_fileExistsAtPath:(id)a0;
+ (id)_dataFromPath:(id)a0;
+ (char)_fileSizeWithinLimitsForPath:(id)a0 maxFileSize:(unsigned long long)a1;
+ (id)bookmarkFromData:(id)a0 bookmarkLocation:(id)a1 versionNumber:(id)a2;
+ (id)bookmarkFromURLPath:(id)a0 maxFileSize:(unsigned long long)a1 versionNumber:(id)a2;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allowedClassesForBookmarkSecureCoding;
- (id)initWithURLPath:(id)a0 versionNumber:(id)a1 bookmark:(id)a2 metadata:(id)a3;
- (char)isEqualToATXBMBookmark:(id)a0;
- (char)saveBookmarkWithError:(id *)a0;
- (id)serializeBookmark:(id *)a0;

@end
