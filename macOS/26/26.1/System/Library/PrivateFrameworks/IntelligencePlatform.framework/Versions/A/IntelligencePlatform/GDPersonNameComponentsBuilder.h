@class NSMutableArray;

@interface GDPersonNameComponentsBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *prefixes;
@property (retain, nonatomic) NSMutableArray *givenNames;
@property (retain, nonatomic) NSMutableArray *middleNames;
@property (retain, nonatomic) NSMutableArray *familyNames;
@property (retain, nonatomic) NSMutableArray *suffixes;
@property (retain, nonatomic) NSMutableArray *nicknames;

- (void).cxx_destruct;
- (id)init;

@end
