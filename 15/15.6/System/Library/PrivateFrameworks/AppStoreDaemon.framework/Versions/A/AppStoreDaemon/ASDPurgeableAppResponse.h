@class NSArray;

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long purgeableSize;
@property (readonly, nonatomic) NSArray *purgeableApps;


- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithPurgeableSize:(long long)a0 purgeableApps:(id)a1;

@end
