@class NSUUID, NSString;

@interface HMDHH2DuplicateUserModelTuple : NSObject

@property (readonly, nonatomic) NSUUID *homeModelID;
@property (readonly, nonatomic) NSString *userMergeID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHomeModelID:(id)a0 userMergeID:(id)a1;

@end
