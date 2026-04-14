@class NSArray, _SNTimeDurationConstraint;

@interface SNTimeDurationConstraint : NSObject <NSCopying, NSSecureCoding> {
    _SNTimeDurationConstraint *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) NSArray *enumeratedDurations;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } durationRange;

- (id)initWithImpl:(id)a0;
- (id)impl;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDurationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithEnumeratedDurations:(id)a0;

@end
