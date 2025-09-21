@class NSString;

@interface PKDiffHunk : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) id valueOld;
@property (retain, nonatomic) id valueNew;
@property (retain, nonatomic) NSString *message;

+ (id)hunkWithKey:(id)a0 oldValue:(id)a1 newValue:(id)a2 message:(id)a3;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToDiffHunk:(id)a0;

@end
