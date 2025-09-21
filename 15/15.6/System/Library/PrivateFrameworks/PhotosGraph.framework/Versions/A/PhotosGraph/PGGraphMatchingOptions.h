@class NSSet, NSArray;

@interface PGGraphMatchingOptions : NSObject

@property (nonatomic) unsigned long long relatedType;
@property (nonatomic) unsigned short targetEventDomain;
@property (retain, nonatomic) NSSet *focusedNodes;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) char needsKeywords;

+ (unsigned short)defaultTargetEventDomain;
+ (id)optionsWithRelatedType:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
