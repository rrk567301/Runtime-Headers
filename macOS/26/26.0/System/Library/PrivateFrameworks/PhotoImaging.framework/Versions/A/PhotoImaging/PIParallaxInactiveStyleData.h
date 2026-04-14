@class NSDictionary, NSData;

@interface PIParallaxInactiveStyleData : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, copy, nonatomic) NSDictionary *configuration;
@property (readonly, copy, nonatomic) NSDictionary *tuningParameters;
@property (readonly, copy, nonatomic) NSData *data;

+ (id)loadFromSerializedData:(id)a0 error:(out id *)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)serializedDataWithError:(out id *)a0;
- (id)initWithData:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 configuration:(id)a2 tuningParameters:(id)a3;

@end
