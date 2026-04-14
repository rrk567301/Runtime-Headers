@class NSString, SDSDataLayout;

@interface SDSDataLayoutListNode : NSObject

@property (nonatomic, retain) SDSDataLayoutListNode *nextLowerPriorityVersion;
@property (nonatomic, readonly) SDSDataLayout *layout;
@property (nonatomic, readonly) NSString *description;

- (id)initWithLayout:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)resolveWithOtherDataLayoutList:(id)a0 error:(id *)a1;

@end
