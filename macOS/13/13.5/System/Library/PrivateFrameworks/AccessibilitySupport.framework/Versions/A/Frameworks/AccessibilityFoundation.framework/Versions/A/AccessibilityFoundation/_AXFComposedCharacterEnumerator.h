@class NSString;

@interface _AXFComposedCharacterEnumerator : NSEnumerator

@property (copy, nonatomic) NSString *_string;
@property (nonatomic) BOOL _done;
@property (nonatomic) unsigned long long _indexOfCurrentComposedCharacter;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)allObjects;
- (id)nextObject;

@end
