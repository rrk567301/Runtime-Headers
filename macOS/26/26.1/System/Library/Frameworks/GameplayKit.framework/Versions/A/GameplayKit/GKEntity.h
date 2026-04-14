@class NSArray, NSMutableDictionary;

@interface GKEntity : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_components;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSArray *components;

+ (id)entity;

- (id)copy;
- (void)addComponent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)componentForClass:(Class)a0;
- (void)removeComponent:(id)a0;
- (id)componentForKey:(id)a0;
- (void)removeComponentForClass:(Class)a0;
- (void)updateWithDeltaTime:(double)a0;

@end
