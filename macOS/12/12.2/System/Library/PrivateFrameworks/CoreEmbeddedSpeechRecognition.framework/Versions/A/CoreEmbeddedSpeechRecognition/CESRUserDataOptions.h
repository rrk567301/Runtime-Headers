@interface CESRUserDataOptions : NSObject <NSCopying>

@property (nonatomic) unsigned int peopleSuggesterContactsCount;
@property (nonatomic) unsigned int bestPeopleSuggesterContactsCount;
@property (nonatomic) unsigned int bestPeopleSuggesterContactsBonus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
