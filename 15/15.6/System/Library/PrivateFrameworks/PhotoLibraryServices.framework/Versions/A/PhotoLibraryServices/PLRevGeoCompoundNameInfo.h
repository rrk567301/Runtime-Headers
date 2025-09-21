@class NSString, NSArray;

@interface PLRevGeoCompoundNameInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *namePrefix;
@property (readonly, copy, nonatomic) NSString *nameSuffix;
@property (readonly, copy, nonatomic) NSArray *sortedNames;
@property (readonly, nonatomic) char isContinuation;
@property (readonly, nonatomic) char suffixWhenPrefixOnly;

+ (id)_localizedNameForName:(id)a0;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNamePrefix:(id)a0 nameSuffix:(id)a1 sortedNames:(id)a2 isContinuation:(char)a3 suffixWhenPrefixOnly:(char)a4;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;

@end
