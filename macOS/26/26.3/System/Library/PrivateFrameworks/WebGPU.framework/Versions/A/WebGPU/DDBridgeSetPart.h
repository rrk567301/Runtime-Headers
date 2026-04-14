@class DDBridgeMeshPart;

@interface DDBridgeSetPart : NSObject

@property (nonatomic, readonly) long long partIndex;
@property (nonatomic, readonly) DDBridgeMeshPart *part;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIndex:(long long)a0 part:(id)a1;

@end
