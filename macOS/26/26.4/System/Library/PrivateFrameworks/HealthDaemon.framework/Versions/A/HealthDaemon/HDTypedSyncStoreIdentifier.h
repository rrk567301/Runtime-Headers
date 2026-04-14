@class NSUUID;

@interface HDTypedSyncStoreIdentifier : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;

@end
