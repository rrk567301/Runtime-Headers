@class NSArray;

@interface VITextLookupResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *sections;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSections:(id)a0;

@end
