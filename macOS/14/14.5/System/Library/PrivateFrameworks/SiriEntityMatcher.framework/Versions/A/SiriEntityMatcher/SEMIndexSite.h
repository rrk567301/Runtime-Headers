@class NSString, NSURL, NSDate, NSNumber, SEMDictionaryLog;

@interface SEMIndexSite : NSObject <NSCopying> {
    SEMDictionaryLog *_log;
    NSString *_description;
}

@property (readonly, nonatomic) NSURL *indexSiteURL;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) NSURL *skitDirectoryURL;
@property (readonly, nonatomic) NSURL *ftsDirectoryURL;
@property (readonly, nonatomic) NSURL *ftsDatabaseURL;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSNumber *userIdHash;
@property (readonly, nonatomic) NSDate *lastMaintenance;

+ (id)_existingIndexSiteAtURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
+ (id)_indexSiteAtRootDirectoryURL:(id)a0 userId:(id)a1 readOnly:(BOOL)a2 error:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)remove:(id *)a0;
- (BOOL)recordMaintenance:(id *)a0;
- (id)initWithIndexSiteURL:(id)a0 readOnly:(BOOL)a1 create:(BOOL)a2 userId:(id)a3 userIdHash:(id)a4 error:(id *)a5;
- (BOOL)isEqualToIndexSite:(id)a0;
- (BOOL)isEquivalentIndexSiteURL:(id)a0;

@end
