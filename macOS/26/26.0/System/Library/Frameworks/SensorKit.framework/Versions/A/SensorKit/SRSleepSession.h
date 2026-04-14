@class NSString, NSDate;

@interface SRSleepSession : NSObject <SRSampling, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double duration;
@property (readonly, nonatomic) long long startReason;
@property (readonly, nonatomic) long long endReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithStartDate:(id)a0 identifier:(id)a1 duration:(double)a2;
- (id)initWithStartDate:(id)a0 startReason:(long long)a1 endReason:(long long)a2 identifier:(id)a3 duration:(double)a4;

@end
