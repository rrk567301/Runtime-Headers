@class NSArray;

@interface TILexicon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *entries;

+ (id)lexiconWithEntries:(id)a0;
+ (void)requestLexiconFromBundlePath:(id)a0 completionHandler:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
