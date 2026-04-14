@class CKAssetDownloadPreauthorization, NSString, NSURL, NSError, NSData, NSMutableArray;
@protocol MMCSOperationMetric;

@interface CKDMMCSItemGroup : NSObject <CKDMMCSItemGroupEquality> {
    unsigned long long _cachedHash;
}

@property (readonly, nonatomic) NSURL *contentBaseURL;
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) NSString *requestor;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (nonatomic) BOOL complete;
@property (retain, nonatomic) id<MMCSOperationMetric> metrics;
@property (retain, nonatomic) NSData *authPutRequest;
@property (retain, nonatomic) NSData *cloneContext;
@property (readonly, nonatomic) NSMutableArray *items;

- (id)initWithItem:(id)a0;
- (void)addItem:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
