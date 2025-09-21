@class NSString;

@interface VFXShaderArgument : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;

- (void)dealloc;

@end
