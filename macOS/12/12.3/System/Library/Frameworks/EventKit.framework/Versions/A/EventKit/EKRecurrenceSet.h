@class NSString, NSArray;

@interface EKRecurrenceSet : NSObject

@property (retain) NSString *recurrenceSetID;
@property (retain) NSArray *series;

+ (id)recurrenceSetForItem:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
