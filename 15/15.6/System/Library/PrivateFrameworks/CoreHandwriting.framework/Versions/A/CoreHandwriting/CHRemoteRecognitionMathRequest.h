@class NSSet, NSArray;

@interface CHRemoteRecognitionMathRequest : CHRemoteRecognitionRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSSet *declaredVariables;
@property (copy, nonatomic) NSArray *locales;

+ (Class)classForKeyedUnarchiver;
+ (id)loadFromFile:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToRemoteRecognitionMathRequest:(id)a0;

@end
