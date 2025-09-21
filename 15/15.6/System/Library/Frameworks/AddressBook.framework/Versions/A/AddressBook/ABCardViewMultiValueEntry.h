@class NSString, NSArray;

@interface ABCardViewMultiValueEntry : NSObject

@property (copy) NSString *identifier;
@property (copy) NSString *label;
@property (copy) id value;
@property (copy) NSString *accountName;
@property char isReadOnly;
@property char isDuplicate;
@property char isPrivate;
@property (readonly) char isSuggested;
@property (retain) id suggestedValue;
@property (copy) NSArray *personIdentifiers;
@property (copy) NSArray *multiValueIdentifiers;

+ (id)entryWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualIgnoringIdentifiers:(id)a0;
- (id)initWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;

@end
