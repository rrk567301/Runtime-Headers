@class NSString;

@interface _UNNotificationContactServiceMatchDetails : NSObject

@property (copy, nonatomic) NSString *cnContactIdentifier;
@property (copy, nonatomic) NSString *cnContactFullname;
@property (nonatomic) char isSuggestedMatch;

- (void).cxx_destruct;
- (id)initWithCnContactIdentifier:(id)a0 cnContactFullname:(id)a1 isSuggestedContact:(char)a2;

@end
