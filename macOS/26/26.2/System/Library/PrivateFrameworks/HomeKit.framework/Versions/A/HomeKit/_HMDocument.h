@class NSString, NSAttributedString;

@interface _HMDocument : NSObject <NSCopying>

@property (readonly, copy) NSString *stringValue;
@property (readonly, copy) NSAttributedString *attributedString;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0 fileManager:(id)a1 error:(id *)a2;

@end
