@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForKeyedArchiver;
- (BOOL)_allowsDirectEncoding;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;
- (id)un_localizedStringArguments;
- (id)un_localizedStringKey;
- (id)un_localizedStringValue;

@end
