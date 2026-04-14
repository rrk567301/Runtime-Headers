@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)length;
- (void).cxx_destruct;
- (Class)classForKeyedArchiver;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;
- (id)description;
- (id)un_localizedStringKey;
- (id)un_localizedStringValue;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)_allowsDirectEncoding;
- (id)init;
- (id)un_localizedStringArguments;

@end
