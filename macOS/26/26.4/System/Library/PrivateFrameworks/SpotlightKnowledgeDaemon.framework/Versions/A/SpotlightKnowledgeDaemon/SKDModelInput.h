@class NSString;

@interface SKDModelInput : NSObject <SKDModelInput>

@property (readonly, nonatomic) int inputID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInputID:(int)a0;

@end
