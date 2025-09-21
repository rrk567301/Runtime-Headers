@class NSString, NSArray;

@interface ICNFMCFileTypeInfo : NSObject

@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *pathExtension;
@property (nonatomic) unsigned int osType;
@property (readonly, copy, nonatomic) NSArray *pedigree;

- (id)description;
- (void).cxx_destruct;
- (char)getTypeInfoForDesiredFields:(unsigned long long)a0;
- (void)_getTypeInfoFromFallbackFields:(unsigned long long *)a0;
- (void)_getTypeInfoBasedOnFields:(unsigned long long *)a0 inputClass:(struct __CFString { } *)a1 inputValue:(struct __CFString { } *)a2;

@end
