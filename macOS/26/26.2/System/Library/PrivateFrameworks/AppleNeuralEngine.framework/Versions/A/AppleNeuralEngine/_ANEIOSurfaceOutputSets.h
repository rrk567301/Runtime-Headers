@class NSArray;

@interface _ANEIOSurfaceOutputSets : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __IOSurface { } *statsSurRef;
@property (readonly, nonatomic) NSArray *outputBuffer;

+ (id)new;
+ (id)objectWithstatsSurRef:(struct __IOSurface { } *)a0 outputBuffer:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithstatsSurRef:(struct __IOSurface { } *)a0 outputBuffer:(id)a1;

@end
