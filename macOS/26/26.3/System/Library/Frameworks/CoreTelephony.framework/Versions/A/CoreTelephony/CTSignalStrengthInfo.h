@class NSString, NSNumber;

@interface CTSignalStrengthInfo : NSObject <CTXPCLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;
@property (retain, nonatomic) NSNumber *bars;
@property (retain, nonatomic) NSNumber *displayBars;
@property (retain, nonatomic) NSNumber *maxDisplayBars;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
