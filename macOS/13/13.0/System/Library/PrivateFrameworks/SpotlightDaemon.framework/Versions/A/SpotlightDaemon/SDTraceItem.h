@class NSString, NSObject;

@interface SDTraceItem : NSObject <NSCopying>

@property (nonatomic) double startTime;
@property (nonatomic) long long identifier;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSObject *data;
@property (retain, nonatomic) NSString *string;

+ (id)stringFromReferenceDate:(double)a0;
+ (void)appendDescription:(id)a0 prefix:(id)a1 toString:(id)a2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
