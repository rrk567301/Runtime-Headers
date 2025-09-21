@class NSString, NSIndexSet;

@interface PTTestRecipeInfo : NSObject <NSSecureCoding> {
    NSString *_uniqueIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSIndexSet *events;
@property (readonly, nonatomic) NSString *recipeDescription;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTestRecipe:(id)a0 domainInfo:(id)a1;

@end
