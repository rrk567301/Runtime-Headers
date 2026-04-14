@class NSString;

@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
