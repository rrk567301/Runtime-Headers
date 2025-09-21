@class NSString, NSMutableDictionary, PKMediaSize;

@interface PKMutableMediaCol : NSObject {
    NSMutableDictionary *_dict;
}

@property (copy) PKMediaSize *mediaSize;
@property (copy) NSString *mediaSource;
@property (copy) NSString *mediaType;

- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)makeMediaCol;
- (void)setMarginsTop:(int)a0 left:(int)a1 bottom:(int)a2 right:(int)a3;

@end
