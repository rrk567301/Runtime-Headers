@class NSString, NSURL, NSMutableDictionary;

@interface BLItemArtworkImage : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (copy, nonatomic) NSString *imageKind;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) double imageScale;

- (unsigned long long)hash;
- (id)description;
- (long long)height;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)width;
- (BOOL)isEqual:(id)a0;
- (id)valueForProperty:(id)a0;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (id)initWithArtworkDictionary:(id)a0;
- (void)setImageKindWithTypeName:(id)a0 variantName:(id)a1;

@end
