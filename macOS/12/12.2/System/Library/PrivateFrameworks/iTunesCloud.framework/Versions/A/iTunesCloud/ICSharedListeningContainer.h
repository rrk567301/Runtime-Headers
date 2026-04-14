@class NSString;

@interface ICSharedListeningContainer : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSString *mediaIdentifier;
@property (readonly, copy, nonatomic) NSString *featureName;

+ (id)groupWithFeatureName:(id)a0;
+ (id)albumContainerWithMediaIdentifier:(id)a0 featureName:(id)a1;
+ (id)playlistContainerWithMediaIdentifier:(id)a0 featureName:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (id)_initWithKind:(long long)a0 mediaIdentifier:(id)a1 featureName:(id)a2;

@end
