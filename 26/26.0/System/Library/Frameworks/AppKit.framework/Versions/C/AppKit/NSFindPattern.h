@class NSString;

@interface NSFindPattern : NSObject <NSCoding, NSCopying>

@property (copy) NSString *regularExpression;
@property (copy) NSString *tokenString;
@property (copy) NSString *displayString;
@property (copy) NSString *replacementString;
@property (readonly) NSString *uniqueID;
@property BOOL allowsBackreferences;
@property int groupID;
@property int captureGroupID;
@property int repeatedPatternID;

+ (id)placeholderFindPattern;
+ (id)readableTypesForPasteboard:(id)a0;
+ (unsigned long long)readingOptionsForType:(id)a0 pasteboard:(id)a1;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_setUniqueID:(id)a0;
- (id)backreferenceExpression;
- (void)generateNewUniqueID;
- (id)replaceExpression;
- (id)writableTypesForPasteboard:(id)a0;

@end
