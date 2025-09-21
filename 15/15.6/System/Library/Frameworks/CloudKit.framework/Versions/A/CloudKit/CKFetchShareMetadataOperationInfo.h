@class NSArray, NSDictionary;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *shareURLsToFetch;
@property (nonatomic) char shouldFetchRootRecord;
@property (retain, nonatomic) NSArray *rootRecordDesiredKeys;
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic) char overwriteContainerPCSServiceIfManatee;
@property (nonatomic) char skipShareDecryption;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
