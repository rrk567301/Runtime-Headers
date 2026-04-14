@class NSData, NSArray, NSDictionary;

@interface BCImageStore : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSArray *rawArray;
@property (retain, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithImages:(id)a0;
- (id)generateImageDictionaryFromArray:(id)a0;
- (id)stringPaddedForBase64:(id)a0;

@end
