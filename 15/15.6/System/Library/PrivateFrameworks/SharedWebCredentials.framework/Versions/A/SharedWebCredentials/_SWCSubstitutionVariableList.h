@interface _SWCSubstitutionVariableList : NSObject <SWCRedactedDescription, NSSecureCoding> {
    struct SWCSubstitutionVariable { unsigned char terminator : 1; unsigned char includesEmptyValue : 1; unsigned char allValuesAreOneCharLong : 1; char cStrings[0]; } _variables[0];
}

@property (class, readonly) _SWCSubstitutionVariableList *cheapBuiltInSubstitutionVariableList;
@property (class, readonly) _SWCSubstitutionVariableList *expensiveBuiltInSubstitutionVariableList;
@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)substitutionVariableListWithDictionary:(id)a0;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)_descriptionDebug:(char)a0 redacted:(char)a1;
- (void)enumerateSubstitutionVariablesWithBlock:(id /* block */)a0;

@end
