@class CKContainerOptions;

@interface CKDAppContainerAccountMetadata : NSObject

@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (nonatomic) long long tokenRegistered;

- (void).cxx_destruct;
- (id)initWithContainerOptions:(id)a0 tokenRegistered:(long long)a1;
- (id)init;

@end
