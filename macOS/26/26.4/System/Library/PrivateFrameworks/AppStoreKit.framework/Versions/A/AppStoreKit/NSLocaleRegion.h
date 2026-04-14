@class NSString;

@interface NSLocaleRegion : NSObject

@property (copy) NSString *twoCharacterCode;
@property (copy) NSString *threeCharacterCode;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRegionIdentifier:(id)a0;

@end
