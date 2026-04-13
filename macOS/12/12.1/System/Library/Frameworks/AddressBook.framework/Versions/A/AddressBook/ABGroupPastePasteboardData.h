@class NSDictionary, NSArray;

@interface ABGroupPastePasteboardData : NSObject

@property (readonly, copy) NSDictionary *groupsDictionary;
@property (readonly, copy) NSDictionary *peopleDictionary;
@property (readonly, copy) NSArray *groupUids;

- (id)initWithPasteboard:(id)a0;
- (void).cxx_destruct;
- (id)initWithPeopleDictionary:(id)a0 groupsDictionary:(id)a1;

@end
