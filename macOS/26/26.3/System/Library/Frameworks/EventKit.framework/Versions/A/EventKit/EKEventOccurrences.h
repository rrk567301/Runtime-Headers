@class EKObjectID, NSArray;

@interface EKEventOccurrences : NSObject

@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) NSArray *startDates;

- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithObjectID:(id)a0 dates:(id)a1;

@end
