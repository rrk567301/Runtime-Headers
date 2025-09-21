@class NSArray;

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long purgeableSize;
@property (readonly, nonatomic) NSArray *purgeableApps;


- (id)initWithError:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPurgeableSize:(long long)a0 purgeableApps:(id)a1;

@end
