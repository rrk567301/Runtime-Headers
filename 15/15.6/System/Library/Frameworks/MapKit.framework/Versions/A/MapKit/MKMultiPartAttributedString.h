@class NSArray, NSAttributedString;

@interface MKMultiPartAttributedString : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly, copy, nonatomic) NSArray *separators;
@property (readonly, nonatomic) NSAttributedString *attributedString;

+ (id)_mapkit_multiPartAttributedStringForComposedStrings:(id)a0 defaultAttributes:(id)a1 repeatedSeparator:(id)a2;
+ (id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)a0 defaultAttributes:(id)a1;
+ (id)_mapkit_multiPartAttributedStringForServerFormattedStrings:(id)a0 defaultAttributes:(id)a1 repeatedSeparator:(id)a2;
+ (id)multiPartAttributedStringWithComponents:(id)a0 repeatedSeparator:(id)a1;
+ (id)multiPartAttributedStringWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithComponents:(id)a0 separators:(id)a1;

@end
