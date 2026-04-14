@interface ADImageDimensions : NSObject

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;

+ (id)imageDimensionsWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;

- (BOOL)isEqual:(id)a0;

@end
