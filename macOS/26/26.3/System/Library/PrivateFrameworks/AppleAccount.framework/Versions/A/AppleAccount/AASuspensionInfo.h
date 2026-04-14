@class NSDictionary;

@interface AASuspensionInfo : NSObject <NSCopying> {
    NSDictionary *_suspensionInfoDictionary;
}

@property (readonly, nonatomic, getter=isiCloudSuspended) BOOL iCloudSuspended;
@property (readonly, nonatomic, getter=isFamilySuspended) BOOL familySuspended;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
