@class NSString, NSUUID;

@interface MSVFrameworkDescription : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic, getter=isRoot) char root;
@property (readonly, nonatomic, getter=isDebug) char debug;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 uuid:(id)a1 version:(id)a2 root:(char)a3 debug:(char)a4;

@end
