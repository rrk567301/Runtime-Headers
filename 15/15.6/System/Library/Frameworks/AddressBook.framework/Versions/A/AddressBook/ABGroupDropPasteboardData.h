@class NSArray;

@interface ABGroupDropPasteboardData : NSObject

@property (readonly) NSArray *peopleUids;
@property (readonly) NSArray *linkedPeopleUids;
@property (readonly) NSArray *groupUids;
@property (readonly) NSArray *entryUids;
@property (readonly) NSArray *filenames;

+ (id)pasteboardDataWithDraggingPasteboard:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (char)isEmpty;
- (char)containsRecords;
- (char)containsFilenames;
- (char)containsGroupRecords;
- (char)containsLinkedPeopleRecords;
- (char)containsPeopleRecords;
- (id)initWithPeopleUids:(id)a0 linkedPeopleUids:(id)a1 groupUids:(id)a2 entryUids:(id)a3 filenames:(id)a4;

@end
