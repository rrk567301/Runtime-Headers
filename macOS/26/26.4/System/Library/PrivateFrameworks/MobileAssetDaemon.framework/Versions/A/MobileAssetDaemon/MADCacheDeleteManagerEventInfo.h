@class NSString, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MADCacheDeleteManagerEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *spaceCheckedID;
@property (nonatomic) unsigned long long totalRequiredFreeSpace;
@property (nonatomic) unsigned long long totalRequiredSpaceForAllRequests;
@property (nonatomic) unsigned long long totalAvailableOnFS;
@property (nonatomic) unsigned long long totalAvailableFromCD;
@property (nonatomic) unsigned long long totalCDBasePath;
@property (nonatomic) unsigned long long totalCDSharedPath;
@property (nonatomic) int cacheDeleteUrgency;
@property (nonatomic) unsigned long long spaceNoLongerNeeded;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0 spaceCheckedID:(id)a1 totalRequiredFreeSpace:(unsigned long long)a2 cacheDeleteUrgency:(int)a3 completionQueue:(id)a4 completion:(id /* block */)a5;
- (id)initWithSpaceCheckedID:(id)a0;
- (id)initWithTotalRequiredFreeSpace:(unsigned long long)a0 cacheDeleteUrgency:(int)a1 completionQueue:(id)a2 completion:(id /* block */)a3;

@end
