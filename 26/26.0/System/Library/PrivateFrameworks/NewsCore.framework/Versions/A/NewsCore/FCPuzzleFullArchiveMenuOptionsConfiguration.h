@class NSString, NSArray;

@interface FCPuzzleFullArchiveMenuOptionsConfiguration : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *icon;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSArray *items;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
