@class NSString;

@interface _NUMediaGeometry : NSObject <NUMediaGeometry>

@property (readonly, nonatomic) struct { long long width; long long height; } size;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasDuration;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)init;
- (BOOL)hasSize;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 orientation:(long long)a1;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 orientation:(long long)a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
