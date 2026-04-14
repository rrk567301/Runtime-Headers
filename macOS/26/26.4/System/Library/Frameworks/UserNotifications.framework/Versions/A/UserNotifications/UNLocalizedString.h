@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (id)debugDescription;
- (id)un_localizedStringArguments;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_allowsDirectEncoding;
- (id)un_localizedStringKey;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)un_localizedStringValue;
- (id)description;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;

@end
