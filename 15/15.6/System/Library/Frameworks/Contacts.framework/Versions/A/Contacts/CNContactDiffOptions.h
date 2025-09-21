@class NSArray;

@interface CNContactDiffOptions : NSObject

@property (nonatomic) char ignoreUnavailableKeys;
@property (retain, nonatomic) NSArray *ignoredKeys;

- (id)init;
- (void).cxx_destruct;

@end
