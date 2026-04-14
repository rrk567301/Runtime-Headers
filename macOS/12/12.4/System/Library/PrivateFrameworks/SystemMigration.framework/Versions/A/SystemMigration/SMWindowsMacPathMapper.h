@class NSMutableDictionary;

@interface SMWindowsMacPathMapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *encodedDomainToPathMap;

+ (id)stringByEncodingToDomainComponentString:(id)a0;
+ (id)stringByDecodingFromDomainComponentString:(id)a0;
+ (id)basePathForDiskDomain:(id)a0;
+ (id)basePathForSharedDomain;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)userShortnameForXMURLString:(id)a0;
- (id)userRelativePathForXMURLString:(id)a0;
- (void)mapShortname:(id)a0 toBasePath:(id)a1;
- (BOOL)isSharedFilesXMURLString:(id)a0;
- (id)pathForDomainOfXMURLString:(id)a0;
- (BOOL)isOtherDiskXMURLString:(id)a0 outName:(id *)a1;
- (void)redirectShortname:(id)a0 toShortname:(id)a1 orBasePath:(id)a2;
- (id)getEncodedDomainComponents:(id)a0 outEncodedDomain:(id *)a1 outPath:(id *)a2;
- (id)pathForURL:(id)a0 userRelative:(BOOL)a1 domainPathOnly:(BOOL)a2;
- (id)basePathForDomainType:(id)a0 specifier:(id)a1 subtypes:(id)a2;
- (id)basePathFromMailDomain:(id)a0 partialBase:(id)a1;
- (void)mapShortname:(id)a0 toShortname:(id)a1;
- (id)pathForXMURLString:(id)a0;

@end
