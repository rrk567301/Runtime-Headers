@class NSArray;

@interface _ANEIOSurfaceOutputSets : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __IOSurface { } *statsSurRef;
@property (readonly, nonatomic) NSArray *outputBuffer;

+ (id)new;
+ (id)objectWithstatsSurRef:(struct __IOSurface { } *)a0 outputBuffer:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithstatsSurRef:(struct __IOSurface { } *)a0 outputBuffer:(id)a1;

@end
