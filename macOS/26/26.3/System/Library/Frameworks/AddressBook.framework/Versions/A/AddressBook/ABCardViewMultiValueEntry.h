@class NSString, NSArray;

@interface ABCardViewMultiValueEntry : NSObject

@property (copy) NSString *identifier;
@property (copy) NSString *label;
@property (copy) id value;
@property (copy) NSString *accountName;
@property BOOL isReadOnly;
@property BOOL isDuplicate;
@property BOOL isPrivate;
@property (readonly) BOOL isSuggested;
@property (retain) id suggestedValue;
@property (copy) NSArray *personIdentifiers;
@property (copy) NSArray *multiValueIdentifiers;

+ (id)entryWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualIgnoringIdentifiers:(id)a0;
- (id)initWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;

@end
