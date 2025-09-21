@class NSArray;

@interface CLSRole : CLSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *privileges;
@property (nonatomic) long long sourceType;
@property char isEditable;

+ (char)supportsSecureCoding;
+ (id)stringForRoleType:(long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;

@end
