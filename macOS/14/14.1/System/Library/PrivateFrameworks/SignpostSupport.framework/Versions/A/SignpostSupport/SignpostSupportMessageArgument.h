@class NSObject;

@interface SignpostSupportMessageArgument : NSObject

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSObject *argumentObject;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArgumentObject:(id)a0;

@end
