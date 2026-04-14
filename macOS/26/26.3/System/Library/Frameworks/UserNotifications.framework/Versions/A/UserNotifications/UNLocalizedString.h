@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (unsigned long long)length;
- (id)debugDescription;
- (BOOL)_allowsDirectEncoding;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (id)init;
- (id)un_localizedStringArguments;
- (Class)classForKeyedArchiver;
- (id)un_localizedStringValue;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)un_localizedStringKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
