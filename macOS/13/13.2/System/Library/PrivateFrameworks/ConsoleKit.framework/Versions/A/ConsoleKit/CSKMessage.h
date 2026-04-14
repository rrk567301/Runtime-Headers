@class NSString, NSNumber;

@interface CSKMessage : CSKEntity <NSCopying> {
    NSString *_rawMessage;
    NSString *_rawCategory;
    unsigned long long _rawActivityIdentifier;
    NSString *_message;
}

@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *subsystem;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSNumber *activityIdentifier;
@property (copy, nonatomic) NSString *payload;

+ (id)nameForType:(long long)a0;
+ (id)propertyNameForFilter:(id)a0;
+ (id)overridedFilterValueForFilter:(id)a0;
+ (id)localizedMessageTypeNameForType:(long long)a0;
+ (id)localizedAccessibilityMessageTypeNameForType:(long long)a0;
+ (id)messageTypeWithLocalizedTypeName:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToMessage:(id)a0;
- (void)setRawMessage:(id)a0;
- (id)initForRaw;
- (id)initWithIdentifier:(id)a0 processImagePath:(id)a1 libraryImagePath:(id)a2 timestamp:(id)a3 timeZone:(id)a4 isVolatile:(BOOL)a5;
- (id)initWithIdentifier:(id)a0 processImagePath:(id)a1 libraryImagePath:(id)a2 timestamp:(id)a3 timeZone:(id)a4 isVolatile:(BOOL)a5 message:(id)a6 type:(long long)a7;
- (id)upperCaseLocalizedMessageTypeName;
- (id)localizedMessageTypeName;
- (id)localizedAccessibilityMessageTypeName;
- (void)setRawCategory:(id)a0;
- (void)setRawActivityIdentifier:(unsigned long long)a0;
- (id)stringDescriptionForIndexer;
- (unsigned long long)stringDescriptionLengthForIndexer;
- (id)iconForCurrentMessageType;
- (id)colorForCurrentMessageType;
- (id)textColorForCurrentMessageType;
- (void)csk_configureTableCellView:(id)a0 withColumnIdentifier:(id)a1 tableView:(id)a2;
- (void)csk_configureTableCellView:(id)a0 withColumnIdentifier:(id)a1 tableView:(id)a2 expanded:(BOOL)a3;

@end
