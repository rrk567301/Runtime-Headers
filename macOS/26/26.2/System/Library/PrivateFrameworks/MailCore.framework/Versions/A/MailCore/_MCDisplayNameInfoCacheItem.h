@class MCDisplayNameInfo, NSString;

@interface _MCDisplayNameInfoCacheItem : NSObject

@property (readonly, nonatomic) MCDisplayNameInfo *info;
@property (readonly, copy, nonatomic) NSString *rawAddress;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInfo:(id)a0 address:(id)a1;

@end
