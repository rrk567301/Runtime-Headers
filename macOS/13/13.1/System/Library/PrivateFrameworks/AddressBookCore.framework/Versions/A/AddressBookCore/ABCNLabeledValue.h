@class ABCNLabelValuePair, NSString;
@protocol NSSecureCoding, NSCopying;

@interface ABCNLabeledValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ABCNLabelValuePair *labelValuePair;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *label;
@property (readonly, copy) id<NSCopying, NSSecureCoding> value;

+ (id)labeledValueWithLabel:(id)a0 value:(id)a1;
+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id /* block */)testMatchingIdentifier:(id)a0;
+ (id)entryForIdentifier:(id)a0 inArray:(id)a1;
+ (id)labelForIdentifier:(id)a0 inArray:(id)a1;
+ (id)valueForIdentifier:(id)a0 inArray:(id)a1;
+ (id)entryWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;
+ (BOOL)isArrayOfEntries:(id)a0 equalToArrayOfEntriesIgnoringIdentifiers:(id)a1;
+ (id)entriesByUnifyingEntryArrays:(id)a0 forProperty:(id)a1;
+ (id)emptyEntries;
+ (id)entriesWithABMultiValue:(id)a0 property:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)labeledValueBySettingLabel:(id)a0;
- (id)labeledValueBySettingValue:(id)a0;
- (id)initWithLabel:(id)a0 value:(id)a1;
- (id)initWithIdentifier:(id)a0 label:(id)a1 value:(id)a2;
- (id)labeledValueBySettingLabel:(id)a0 value:(id)a1;
- (BOOL)isEqualIgnoringIdentifiers:(id)a0;

@end
