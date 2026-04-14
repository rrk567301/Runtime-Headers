@class NSMutableDictionary, NSMutableArray;

@interface ACSHKCAPKeyboardModel : NSObject

@property (nonatomic) double minX;
@property (nonatomic) double minY;
@property (nonatomic) double totalKeyWidth;
@property (nonatomic) double totalKeyHeight;
@property (retain) NSMutableDictionary *keyMapping;
@property (readonly) struct CGSize { double width; double height; } size;
@property (retain) NSMutableArray *keys;

- (void)addKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)_keyForCode:(unsigned long long)a0;

@end
