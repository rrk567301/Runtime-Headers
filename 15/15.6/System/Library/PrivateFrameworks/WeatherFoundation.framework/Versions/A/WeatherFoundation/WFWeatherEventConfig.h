@interface WFWeatherEventConfig : NSObject <NSCopying>

@property (nonatomic) char enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 defaulEnabled:(char)a1;

@end
