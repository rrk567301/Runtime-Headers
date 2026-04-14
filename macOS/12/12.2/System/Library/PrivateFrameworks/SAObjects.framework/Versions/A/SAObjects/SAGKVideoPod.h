@class NSArray;

@interface SAGKVideoPod : SAGKPodView

@property (copy, nonatomic) NSArray *videos;

+ (id)videoPod;
+ (id)videoPodWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
