@class NSArray, NSAttributedString;

@interface MKMultiPartAttributedString : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly, copy, nonatomic) NSArray *separators;
@property (readonly, nonatomic) NSAttributedString *attributedString;

+ (id)multiPartAttributedStringWithString:(id)a0;
+ (id)multiPartAttributedStringWithComponents:(id)a0 repeatedSeparator:(id)a1;
+ (id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)a0 defaultAttributes:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0 separators:(id)a1;

@end
