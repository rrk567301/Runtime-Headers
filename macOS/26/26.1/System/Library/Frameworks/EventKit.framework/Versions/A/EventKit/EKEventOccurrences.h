@class EKObjectID, NSArray;

@interface EKEventOccurrences : NSObject

@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) NSArray *startDates;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)initWithObjectID:(id)a0 dates:(id)a1;

@end
