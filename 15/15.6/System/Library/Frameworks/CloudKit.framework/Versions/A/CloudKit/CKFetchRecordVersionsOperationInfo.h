@class NSArray, NSString;

@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSString *minimumVersionETag;
@property (nonatomic) char shouldFetchAssetContent;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
