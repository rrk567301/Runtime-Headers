@interface MapsSync.MapsSyncError : NSError

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
