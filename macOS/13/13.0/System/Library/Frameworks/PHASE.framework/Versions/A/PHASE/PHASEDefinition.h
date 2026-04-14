@class NSString;

@interface PHASEDefinition : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *uid;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)uid;
- (void)setUid:(id)a0;
- (id)initInternal;

@end
