@class BRLTBrailleMusicParserInternal;

@interface BRLTBrailleMusicParser : NSObject

@property (readonly) BRLTBrailleMusicParserInternal *underlyingObject;

+ (id)sharedParser;

- (id)translate:(id)a0;
- (void).cxx_destruct;
- (id)initWithUnderlyingObject:(id)a0;

@end
