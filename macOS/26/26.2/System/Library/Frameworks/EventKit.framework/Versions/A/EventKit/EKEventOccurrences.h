@class EKObjectID, NSArray;

@interface EKEventOccurrences : NSObject

@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) NSArray *startDates;

- (id)redactedDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObjectID:(id)a0 dates:(id)a1;

@end
