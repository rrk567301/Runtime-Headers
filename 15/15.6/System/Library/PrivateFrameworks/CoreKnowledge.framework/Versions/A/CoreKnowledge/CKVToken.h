@class NSString, NSArray;

@interface CKVToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *cleanValue;
@property (readonly, nonatomic) unsigned long long beginIndex;
@property (readonly, nonatomic) unsigned long long endIndex;
@property (readonly, nonatomic) char isSignificant;
@property (readonly, nonatomic) char isWhitespace;
@property (readonly, nonatomic) NSArray *normalizedValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToToken:(id)a0;
- (id)initWithValue:(id)a0 cleanValue:(id)a1 beginIndex:(unsigned long long)a2 endIndex:(unsigned long long)a3 isSignificant:(char)a4 isWhitespace:(char)a5;
- (id)initWithValue:(id)a0 cleanValue:(id)a1 beginIndex:(unsigned long long)a2 endIndex:(unsigned long long)a3 isSignificant:(char)a4 isWhitespace:(char)a5 normalizedValues:(id)a6;

@end
