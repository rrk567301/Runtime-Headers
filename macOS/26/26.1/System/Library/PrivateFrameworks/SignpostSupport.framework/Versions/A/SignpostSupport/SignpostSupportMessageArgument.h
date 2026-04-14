@class NSObject;

@interface SignpostSupportMessageArgument : NSObject

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSObject *argumentObject;
@property (readonly, nonatomic) unsigned char privacyLevel;

- (id)initWithArgumentObject:(id)a0 privacy:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
