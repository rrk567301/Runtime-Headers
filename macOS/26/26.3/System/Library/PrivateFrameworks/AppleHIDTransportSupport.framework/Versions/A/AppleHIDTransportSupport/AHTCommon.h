@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (unsigned long long)registryID;
- (void)close;
- (BOOL)open;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)reset;
- (BOOL)setPower:(long long)a0;
- (id)initWithService:(unsigned int)a0;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;

@end
