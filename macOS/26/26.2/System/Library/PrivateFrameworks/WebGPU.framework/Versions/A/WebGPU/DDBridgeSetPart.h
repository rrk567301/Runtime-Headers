@class DDBridgeMeshPart;

@interface DDBridgeSetPart : NSObject

@property (nonatomic, readonly) long long partIndex;
@property (nonatomic, readonly) DDBridgeMeshPart *part;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIndex:(long long)a0 part:(id)a1;

@end
