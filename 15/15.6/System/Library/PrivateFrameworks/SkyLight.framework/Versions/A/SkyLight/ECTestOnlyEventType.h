@interface ECTestOnlyEventType : NSObject <ECEventType>

@property (readonly, nonatomic) char isCGType;
@property (readonly, nonatomic) unsigned int hidType;
@property (readonly, nonatomic) unsigned int cgType;
@property (readonly, nonatomic) unsigned long long cgSubType;

- (unsigned int)hidType;
- (unsigned long long)cgSubType;
- (unsigned int)cgType;
- (char)isCGType;

@end
