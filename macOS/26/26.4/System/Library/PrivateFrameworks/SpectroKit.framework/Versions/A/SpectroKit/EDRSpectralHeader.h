@class NSString;

@interface EDRSpectralHeader : NSObject

@property (copy, nonatomic) NSString *signature;
@property (nonatomic) unsigned int numValues;

- (void)validate;
- (void).cxx_destruct;
- (void)print;
- (id)init;
- (int)getLength;
- (int)parse:(id)a0 atOffset:(int)a1;

@end
