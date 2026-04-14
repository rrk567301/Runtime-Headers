@class NSString, CCDictionaryLog, NSURL, NSDate, NSNumber;

@interface CCDataSite : NSObject <NSCopying> {
    CCDictionaryLog *_log;
    NSString *_description;
}

@property (readonly, nonatomic) NSURL *dataSiteURL;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSNumber *userIdHash;
@property (readonly, nonatomic) NSDate *lastMaintenance;
@property (readonly, nonatomic) NSNumber *databaseRowsModified;

+ (id)_dataSiteAtRootDirectoryURL:(id)a0 userId:(id)a1 readOnly:(BOOL)a2 error:(id *)a3;
+ (id)_existingDataSiteAtURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)remove:(id *)a0;
- (BOOL)incrementDatabaseRowsModified:(unsigned long long)a0 error:(id *)a1;
- (BOOL)recordMaintenance:(id *)a0;
- (BOOL)resetDatabaseRowsModified:(id *)a0;
- (id)initWithDataSiteURL:(id)a0 readOnly:(BOOL)a1 create:(BOOL)a2 userId:(id)a3 userIdHash:(id)a4 error:(id *)a5;
- (BOOL)isEqualToDataSite:(id)a0;
- (BOOL)isEquivalentDataSiteURL:(id)a0;

@end
