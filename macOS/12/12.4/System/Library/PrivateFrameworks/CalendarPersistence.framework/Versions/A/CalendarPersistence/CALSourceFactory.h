@class NSMutableDictionary;

@interface CALSourceFactory : NSObject {
    NSMutableDictionary *_types;
}

+ (id)defaultFactory;

- (id)init;
- (void).cxx_destruct;
- (void)setClass:(Class)a0 forType:(id)a1;
- (id)sourceWithType:(id)a0 key:(id)a1;

@end
