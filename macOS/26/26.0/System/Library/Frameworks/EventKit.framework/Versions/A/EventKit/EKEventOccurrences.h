@class EKObjectID, NSArray;

@interface EKEventOccurrences : NSObject

@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) NSArray *startDates;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithObjectID:(id)a0 dates:(id)a1;

@end
