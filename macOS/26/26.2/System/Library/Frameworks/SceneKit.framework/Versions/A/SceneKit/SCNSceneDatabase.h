@class NSMutableDictionary;

@interface SCNSceneDatabase : NSObject <NSSecureCoding> {
    NSMutableDictionary *_db;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)lookUpKeyForObjectNamed:(id)a0 class:(Class)a1;
+ (id)sceneDatabase;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addInstance:(id)a0 withName:(id)a1 class:(Class)a2;

@end
