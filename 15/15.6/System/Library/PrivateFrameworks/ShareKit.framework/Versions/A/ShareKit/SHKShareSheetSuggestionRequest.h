@class NSString, NSUUID;

@interface SHKShareSheetSuggestionRequest : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) char isRestricted;
@property (readonly, nonatomic) char isRTS;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 sessionID:(id)a1 isRestricted:(char)a2 isRTS:(char)a3;

@end
