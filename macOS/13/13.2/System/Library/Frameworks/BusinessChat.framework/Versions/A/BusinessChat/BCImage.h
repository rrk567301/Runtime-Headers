@class NSString, NSDictionary, NSData, NSImage;

@interface BCImage : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *imageDescription;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id)initWithImageData:(id)a0 identifier:(id)a1 description:(id)a2;

@end
