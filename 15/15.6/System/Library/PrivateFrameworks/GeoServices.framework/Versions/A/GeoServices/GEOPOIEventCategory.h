@class NSString, NSArray;

@interface GEOPOIEventCategory : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSArray *localizedNames;

+ (id)poiEventCategoriesForEventCategories:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCategory:(id)a0 localizedNames:(id)a1;
- (id)initWithEventCategory:(id)a0;
- (char)isEqualToPOIEventCategory:(id)a0;
- (id)parsePDCategories:(id)a0;

@end
