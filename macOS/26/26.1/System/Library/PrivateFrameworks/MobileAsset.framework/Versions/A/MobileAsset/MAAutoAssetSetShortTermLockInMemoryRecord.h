@class NSString, MAAutoAssetSetStatus, NSDate;

@interface MAAutoAssetSetShortTermLockInMemoryRecord : NSObject

@property (readonly, retain, nonatomic) NSString *lockerFileRealPath;
@property (readonly, retain, nonatomic) NSDate *recordDate;
@property (readonly, retain, nonatomic) MAAutoAssetSetStatus *setStatus;

- (id)summary;
- (void).cxx_destruct;
- (id)initWithPathAndSetStatus:(id)a0 setStatus:(id)a1;
- (BOOL)isCurrentlyValid;

@end
