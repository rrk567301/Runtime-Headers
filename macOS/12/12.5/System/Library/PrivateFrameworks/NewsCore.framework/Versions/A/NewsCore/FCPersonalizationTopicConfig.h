@class NSString;

@interface FCPersonalizationTopicConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) double scoreMultiplier;
@property (nonatomic) double tagWeight;
@property (nonatomic) BOOL capAtBaseline;
@property (nonatomic) long long limitInGroup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithConfigDictionary:(id)a0 defaultConfig:(id)a1;
- (id)initWithTopicID:(id)a0 scoreMultiplier:(double)a1 tagWeight:(double)a2 capAtBaseline:(BOOL)a3 limitInGroup:(long long)a4;

@end
