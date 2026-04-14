@class NSString, NSUUID;

@interface UMTask : NSObject {
    NSUUID *_uuid;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) int pid;

+ (id)taskWithName:(id)a0 reason:(id)a1;
+ (id)taskWithName:(id)a0 reason:(id)a1 forBundleID:(id)a2;

- (void)end;
- (void)begin;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
