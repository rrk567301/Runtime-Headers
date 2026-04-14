@class NSString;

@interface EFPathComponent : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sanitizedString;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, copy, nonatomic) NSString *pathExtension;
@property (readonly, copy, nonatomic) EFPathComponent *pathComponentByDeletingPathExtension;

+ (id)pathComponentWithString:(id)a0;

- (id)debugDescription;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)subpathToIndex:(unsigned long long)a0;

@end
