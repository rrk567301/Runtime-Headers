@class NSArray;

@interface SATTSGetUnspeakableRangeOfTextCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *results;

+ (id)getUnspeakableRangeOfTextCompleted;
+ (id)getUnspeakableRangeOfTextCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
