@class NSString, MTSound, NSDate;

@interface MTTimerDuration : NSObject <NAEquatable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDate *lastModified;
@property (retain, nonatomic) MTSound *sound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hashString;
- (id)initWithTitle:(id)a0 duration:(double)a1;
- (id)initWithTitle:(id)a0 duration:(double)a1 sound:(id)a2;
- (id)initWithTitle:(id)a0 duration:(double)a1 sound:(id)a2 lastModified:(id)a3;
- (char)isEqualToDuration:(id)a0;

@end
