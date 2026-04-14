@class NSArray;

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long purgedSize;
@property (readonly, nonatomic) NSArray *purgedApps;


- (id)init;
- (void).cxx_destruct;
- (id)initWithPurgedSize:(long long)a0 purgedApps:(id)a1;

@end
