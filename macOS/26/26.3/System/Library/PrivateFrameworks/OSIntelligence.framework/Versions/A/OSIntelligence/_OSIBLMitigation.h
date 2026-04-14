@class NSString;

@interface _OSIBLMitigation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long level;
@property (nonatomic) double confidence;
@property (nonatomic) long long decisionMaker;
@property (retain, nonatomic) NSString *decisionMakerString;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLevel:(long long)a0 decisionMaker:(long long)a1 decisionMakerString:(id)a2 confidence:(double)a3;

@end
