@class NSString, MCAction;

@interface MCActionForEachPlug : MCAction

@property (copy) NSString *prefix;
@property (retain) MCAction *action;

+ (id)forEachPlugActionForTargetPlugObjectID:(id)a0 withAction:(id)a1 andPrefix:(id)a2;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;

@end
