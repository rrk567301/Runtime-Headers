@class NSString, BRLTTable, NSSet;

@interface AXBrailleTable : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) BRLTTable *brltTable;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) NSString *localizedProviderName;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSSet *locales;
@property (readonly, nonatomic) BOOL isEightDot;

+ (BOOL)supportsSecureCoding;
+ (id)defaultTableForLocale:(id)a0;
+ (id)languageAgnosticTables;
+ (id)supportedLocales;
+ (id)tablesForLocale:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBRLTTable:(id)a0;

@end
