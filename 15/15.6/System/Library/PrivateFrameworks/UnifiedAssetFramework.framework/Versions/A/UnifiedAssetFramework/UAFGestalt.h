@interface UAFGestalt : NSObject

@property (class, readonly, nonatomic) UAFGestalt *sharedManager;

+ (char)predicateMatch:(id)a0;
+ (char)deviceMatch:(id)a0 onMatch:(id /* block */)a1;
+ (id)dictionaryForGestalt:(id)a0;
+ (char)dictionaryIsValid:(id)a0;
+ (char)isKeySupported:(id)a0 key:(id)a1;
+ (id)urlForGestalt:(id)a0;

- (id)init;
- (id)queryAllSupportedKeys:(id)a0;
- (char)query:(id)a0 forKey:(id)a1;

@end
