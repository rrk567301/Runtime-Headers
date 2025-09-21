@class NSNumber, _ANEIOSurfaceObject;

@interface _ANEBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _ANEIOSurfaceObject *ioSurfaceObject;
@property (readonly, nonatomic) NSNumber *symbolIndex;
@property (readonly, nonatomic) long long source;

+ (id)new;
+ (id)bufferWithIOSurfaceObject:(id)a0 symbolIndex:(id)a1 source:(long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIOSurfaceObject:(id)a0 symbolIndex:(id)a1 source:(long long)a2;

@end
