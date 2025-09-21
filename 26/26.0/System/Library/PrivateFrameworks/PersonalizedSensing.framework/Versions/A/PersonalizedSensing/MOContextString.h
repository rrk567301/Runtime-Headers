@class NSString, NSUUID, NSArray;

@interface MOContextString : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long source;
@property (nonatomic) double accuracy;
@property (nonatomic) double satisfaction;
@property (nonatomic) unsigned long long promptIndex;
@property (nonatomic) double totalScore;
@property (retain, nonatomic) NSString *textString;
@property (retain, nonatomic) NSUUID *stringIdentifier;
@property (copy, nonatomic) NSArray *contextDimensions;
@property (nonatomic) unsigned long long contentType;

+ (id)describeSource:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 string:(id)a1;
- (id)describeSource;

@end
