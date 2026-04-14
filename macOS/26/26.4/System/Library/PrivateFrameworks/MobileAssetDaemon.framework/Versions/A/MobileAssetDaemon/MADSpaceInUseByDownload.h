@class NSString;

@interface MADSpaceInUseByDownload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *spaceCheckedID;
@property (nonatomic) unsigned long long totalRequiredFreeSpace;
@property (nonatomic) int cacheDeleteUrgency;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceCheckedID:(id)a0;
- (id)initWithSpaceCheckedID:(id)a0 totalRequiredFreeSpace:(unsigned long long)a1 cacheDeleteUrgency:(int)a2;

@end
