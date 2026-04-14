@class NSSet, NSArray;

@interface CHRemoteRecognitionMathRequest : CHRemoteRecognitionRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *declaredVariables;
@property (copy, nonatomic) NSArray *locales;

+ (Class)classForKeyedUnarchiver;
+ (id)loadFromFile:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRemoteRecognitionMathRequest:(id)a0;

@end
