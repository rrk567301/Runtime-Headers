@class NSArray, NSString;

@interface GetContactAttributeIntentResponse : INIntentResponse

@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic, copy) NSString *property;
@property (nonatomic) long long code;

- (id)initWithBackingStore:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
