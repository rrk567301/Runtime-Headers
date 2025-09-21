@class NSString, NSURL, CKRecordZoneID, NSData, NSError;

@interface CKAssetRereferenceInfo : NSObject

@property (readonly, copy, nonatomic) CKRecordZoneID *sourceZoneID;
@property (copy) NSURL *contentBaseURL;
@property (copy) NSString *owner;
@property (copy) NSString *requestor;
@property (copy) NSData *assetKey;
@property (copy) NSData *referenceSignature;
@property (copy) NSString *downloadToken;
@property unsigned long long downloadTokenExpiration;
@property (retain) NSError *error;
@property (copy) NSString *destinationFieldName;

- (id)description;
- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (id)initWithSourceZoneID:(id)a0;

@end
