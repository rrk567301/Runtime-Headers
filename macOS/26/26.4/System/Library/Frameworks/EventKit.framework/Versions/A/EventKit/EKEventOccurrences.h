@class EKObjectID, NSArray;

@interface EKEventOccurrences : NSObject

@property (readonly, nonatomic) EKObjectID *objectID;
@property (readonly, nonatomic) NSArray *startDates;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithObjectID:(id)a0 dates:(id)a1;

@end
