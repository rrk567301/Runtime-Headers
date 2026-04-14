@class NSMutableDictionary;

@interface MCGenericAction : MCAction

@property (copy) NSMutableDictionary *attributes;

+ (id)genericActionForTargetPlugObjectID:(id)a0 withAttributes:(id)a1;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)a0;
- (void)_copySelfToSnapshot:(id)a0;

@end
