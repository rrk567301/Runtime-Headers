@class NSString;

@interface NSLocaleRegion : NSObject

@property (copy) NSString *twoCharacterCode;
@property (copy) NSString *threeCharacterCode;

- (id)init;
- (id)initWithLocaleIdentifier:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRegionIdentifier:(id)a0;

@end
