@class NSString;

@interface CCNullVisitable : NSObject <CCVisitable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptVisitor:(id)a0;

@end
