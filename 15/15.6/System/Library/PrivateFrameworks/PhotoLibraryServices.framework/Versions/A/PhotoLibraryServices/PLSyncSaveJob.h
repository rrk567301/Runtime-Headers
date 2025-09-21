@class NSNumber, NSString, NSSet, NSURL, NSDate, CLLocation, NSArray;

@interface PLSyncSaveJob : NSObject

@property (retain, nonatomic) NSURL *originalAssetURL;
@property (nonatomic) char hasVideoComplement;
@property (retain, nonatomic) NSURL *videoComplementURL;
@property (nonatomic) char isVideo;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSSet *albumURIs;
@property (copy, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSArray *facesInfo;
@property (retain, nonatomic) NSNumber *sortToken;
@property (retain, nonatomic) NSString *originalFileName;
@property (nonatomic) char isSyncComplete;
@property (nonatomic) char cleanupSyncState;
@property (copy, nonatomic) NSDate *cleanupBeforeDate;
@property (copy, nonatomic) id /* block */ finishedBlock;

- (id)description;
- (void).cxx_destruct;
- (id)serializedData;
- (id)initFromSerializedData:(id)a0;
- (void)processFacesWithBlock:(id /* block */)a0;

@end
