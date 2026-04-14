@class NSArray;

@interface CLSRole : CLSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *privileges;
@property (nonatomic) long long sourceType;
@property BOOL isEditable;

+ (BOOL)supportsSecureCoding;
+ (id)stringForRoleType:(long long)a0;

- (id)dictionaryRepresentation;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
