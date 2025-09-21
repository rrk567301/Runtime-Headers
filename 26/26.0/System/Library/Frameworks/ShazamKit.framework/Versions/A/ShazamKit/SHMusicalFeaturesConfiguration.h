@class NSURL;

@interface SHMusicalFeaturesConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *cremaModelURL;
@property (readonly) NSURL *crepeModelURL;
@property (readonly) double minimumDuration;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCremaModelURL:(id)a0 crepeModelURL:(id)a1 minimumDuration:(double)a2;
- (id)initWithCremaModelURL:(id)a0 crepeModelURL:(id)a1 minimumDuration:(double)a2 error:(id *)a3;
- (id)initWithCremaModelURL:(id)a0 minimumDuration:(double)a1 error:(id *)a2;
- (id)initWithCrepeModelURL:(id)a0 minimumDuration:(double)a1 error:(id *)a2;

@end
