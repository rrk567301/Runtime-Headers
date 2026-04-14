@class BRLTBrailleMusicParserInternal;

@interface BRLTBrailleMusicParser : NSObject

@property (readonly) BRLTBrailleMusicParserInternal *underlyingObject;

+ (id)sharedParser;

- (void).cxx_destruct;
- (id)translate:(id)a0;
- (id)initWithUnderlyingObject:(id)a0;

@end
