@class NSString;
@protocol _EXExtensionRepresenting;

@interface _EXHostViewControllerConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) id<_EXExtensionRepresenting> extension;
@property (retain, nonatomic) NSString *sceneIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
