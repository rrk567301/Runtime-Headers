@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;
@property (nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;
@property (retain, nonatomic) CPLResetTracker *resetTracker;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
