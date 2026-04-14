@class NSString, NSDictionary;

@interface NSPasteboardFilter : NSObject

@property (readonly, copy) NSString *intype;
@property (readonly, copy) NSString *outtype;
@property (readonly, copy) NSDictionary *spec;

+ (void)initialize;
+ (id)_conversionChainFrom:(id)a0 to:(id)a1;
+ (id)_typesFilterableFromType:(id)a0;
+ (id)_typesFilterableToType:(id)a0;
+ (id)filterWithFilterSpec:(id)a0 intype:(id)a1 outtype:(id)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)_computeDataFromData:(id)a0;
- (id)initWithFilterSpec:(id)a0 intype:(id)a1 outtype:(id)a2;

@end
