@class NSSet, NSArray;

@interface CHRemoteRecognitionMathRequest : CHRemoteRecognitionRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *declaredVariables;
@property (copy, nonatomic) NSArray *locales;

+ (id)loadFromFile:(id)a0;
+ (Class)classForKeyedUnarchiver;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRemoteRecognitionMathRequest:(id)a0;

@end
