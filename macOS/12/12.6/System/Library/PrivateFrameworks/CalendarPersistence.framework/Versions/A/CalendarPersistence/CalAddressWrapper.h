@class NSString;

@interface CalAddressWrapper : NSObject

@property (retain) NSString *address;
@property (retain, nonatomic) NSString *cuAddress;
@property BOOL fromPrevious;
@property int freeBusyType;

+ (id)completionForSubstring:(id)a0 displayedName:(id)a1 firstName:(id)a2 lastName:(id)a3 address:(id)a4 isLocation:(BOOL)a5;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isGroup;
- (id)firstName;
- (int)userType;
- (id)email;
- (id)lastName;
- (id)initWithAddress:(id)a0;
- (id)principalPath;
- (id)displayedName;
- (id)completionForSubstring:(id)a0;
- (BOOL)isPerson;
- (BOOL)isLocation;
- (BOOL)isResource;
- (id)sortString;
- (BOOL)isRoom;
- (id)groupCompletionForSubstring:(id)a0 count:(long long)a1;
- (id)attendeeURL;

@end
