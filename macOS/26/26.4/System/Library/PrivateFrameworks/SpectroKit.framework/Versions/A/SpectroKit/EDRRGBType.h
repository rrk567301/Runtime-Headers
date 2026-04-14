@interface EDRRGBType : NSObject

@property (nonatomic) unsigned short red;
@property (nonatomic) unsigned short green;
@property (nonatomic) unsigned short blue;

- (void)validate;
- (void)print;
- (id)init;
- (int)getLength;
- (int)parse:(id)a0 atOffset:(int)a1;

@end
