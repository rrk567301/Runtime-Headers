@class NSString;

@interface _AXFComposedCharacterEnumerator : NSEnumerator

@property (copy, nonatomic) NSString *_string;
@property (nonatomic) BOOL _done;
@property (nonatomic) unsigned long long _indexOfCurrentComposedCharacter;

- (id)initWithString:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (id)nextObject;

@end
