@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_allowsDirectEncoding;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (id)un_localizedStringArguments;
- (void)encodeWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)init;
- (id)un_localizedStringKey;
- (id)description;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;
- (id)initWithCoder:(id)a0;
- (unsigned long long)length;
- (id)un_localizedStringValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
