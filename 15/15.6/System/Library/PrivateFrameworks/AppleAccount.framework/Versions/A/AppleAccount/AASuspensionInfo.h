@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {
    NSDictionary *_suspensionInfoDictionary;
}

@property (readonly, nonatomic, getter=isiCloudSuspended) char iCloudSuspended;
@property (readonly, nonatomic, getter=isFamilySuspended) char familySuspended;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
