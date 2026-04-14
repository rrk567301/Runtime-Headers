@class NSDate;

@interface FUStepTime : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long type;
@property (retain) NSDate *date;
@property (readonly) double timeIntervalSinceNow;

- (id)description;
- (id)initWithType:(unsigned long long)a0 date:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
