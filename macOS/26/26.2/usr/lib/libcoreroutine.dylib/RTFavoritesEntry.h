@class NSString, RTContact;

@interface RTFavoritesEntry : NSObject

@property (readonly, nonatomic) RTContact *contact;
@property (readonly, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithContact:(id)a0 value:(id)a1;

@end
