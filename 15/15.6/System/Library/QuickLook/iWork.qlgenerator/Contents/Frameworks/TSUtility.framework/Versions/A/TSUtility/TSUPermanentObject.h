@interface TSUPermanentObject : NSObject

@property (readonly, nonatomic) char isPermanent;

- (oneway void)release;
- (id)retain;
- (void)markAsPermanent;

@end
